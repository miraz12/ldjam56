#include "BloomPass.hpp"
#include "glm/fwd.hpp"
#include "glm/gtc/type_ptr.hpp"
#include <iostream>

BloomPass::BloomPass()
    : RenderPass("resources/Shaders/vertex2D.glsl", "resources/Shaders/bloomUpFragment.glsl"),
      m_downShader("resources/Shaders/vertex2D.glsl", "resources/Shaders/bloomDownFragment.glsl") {

  uint32_t fbo;
  glGenFramebuffers(1, &fbo);
  glBindFramebuffer(GL_FRAMEBUFFER, fbo);
  p_fboManager.setFBO("bloomFBO", fbo);

  p_shaderProgram.setAttribBinding("POSITION");
  p_shaderProgram.setAttribBinding("TEXCOORD_0");
  p_shaderProgram.setUniformBinding("srcResolution");
  p_shaderProgram.setUniformBinding("filterRadius");


  m_downShader.setAttribBinding("POSITION");
  m_downShader.setAttribBinding("TEXCOORD_0");
  m_downShader.setUniformBinding("srcResolution");
  m_downShader.setUniformBinding("mipLevel");

  // setViewport(p_width, p_height);
  glm::vec2 currentMipSize(p_width, p_height);
  glm::ivec2 currentMipSizeInt(p_width, p_height);
  for (unsigned int i = 0; i < 5; i++) {
    mipLevel mip;
    currentMipSize *= 0.5f;
    currentMipSizeInt /= 2;
    mip.size = currentMipSize;
    mip.intSize = currentMipSizeInt;

    glGenTextures(1, &mip.texture);
    glBindTexture(GL_TEXTURE_2D, mip.texture);
    // we are downscaling an HDR color buffer, so we need a float texture format
    glTexImage2D(GL_TEXTURE_2D, 0, GL_R11F_G11F_B10F, (int)currentMipSize.x, (int)currentMipSize.y,
                 0, GL_RGB, GL_FLOAT, nullptr);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);

    std::cout << "Created bloom mip " << currentMipSizeInt.x << 'x' << currentMipSizeInt.y
              << std::endl;
    m_mipChain.emplace_back(mip);
  }

  glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, m_mipChain[0].texture,
                         0);

  unsigned int attachments[1] = {GL_COLOR_ATTACHMENT0};
  glDrawBuffers(1, attachments);
  // check completion status
  int status = glCheckFramebufferStatus(GL_FRAMEBUFFER);
  if (status != GL_FRAMEBUFFER_COMPLETE) {
    printf("bloom FBO error, status: 0x%x\n", status);
  }

  glBindFramebuffer(GL_FRAMEBUFFER, 0);

  uint32_t quadVBO;
  float quadVertices[] = {
      // positions        // texture Coords
      -1.0f, 1.0f, 0.0f, 0.0f, 1.0f, -1.0f, -1.0f, 0.0f, 0.0f, 0.0f,
      1.0f,  1.0f, 0.0f, 1.0f, 1.0f, 1.0f,  -1.0f, 0.0f, 1.0f, 0.0f,
  };

  glGenVertexArrays(1, &m_quadVAO);
  glGenBuffers(1, &quadVBO);
  glBindVertexArray(m_quadVAO);

  glBindBuffer(GL_ARRAY_BUFFER, quadVBO);
  glBufferData(GL_ARRAY_BUFFER, sizeof(quadVertices), &quadVertices, GL_STATIC_DRAW);
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void *)0);
  glEnableVertexAttribArray(1);
  glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void *)(3 * sizeof(float)));
}

void BloomPass::Execute(ECSManager &eManager) {

  m_downShader.use();
  glUniform2f(m_downShader.getUniformLocation("srcResolution"), p_width, p_height);

  if (true) {
    glUniform1i(m_downShader.getUniformLocation("mipLevel"), 0);
  }

  // Bind srcTexture (HDR color buffer) as initial texture input
  glActiveTexture(GL_TEXTURE0);
  //glBindTexture(GL_TEXTURE_2D, srcTexture);

  // Progressively downsample through the mip chain
  for (int i = 0; i < (int)m_mipChain.size(); i++) {
    const mipLevel &mip = m_mipChain[i];
    glViewport(0, 0, mip.size.x, mip.size.y);
    glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, mip.texture, 0);

    // Render screen-filled quad of resolution of current mip
    glBindVertexArray(m_quadVAO);
    glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

    // Set current mip resolution as srcResolution for next iteration
    glUniform2f(m_downShader.getUniformLocation("srcResolution"), mip.size.x, mip.size.y);
    // Set current mip as texture input for next iteration
    glBindTexture(GL_TEXTURE_2D, mip.texture);
    // Disable Karis average for consequent downsamples
    if (i == 0) {
      glUniform1i(m_downShader.getUniformLocation("mipLevel"), 1);
    }
  }

  p_shaderProgram.use();
  glUniform1f(p_shaderProgram.getUniformLocation("filterRadius"), 0.005f);

  // Enable additive blending
  glEnable(GL_BLEND);
  glBlendFunc(GL_ONE, GL_ONE);
  glBlendEquation(GL_FUNC_ADD);

  for (int i = (int)m_mipChain.size() - 1; i > 0; i--) {
    const mipLevel &mip = m_mipChain[i];
    const mipLevel &nextMip = m_mipChain[i - 1];

    // Bind viewport and texture from where to read
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, mip.texture);

    // Set framebuffer render target (we write to this texture)
    glViewport(0, 0, nextMip.size.x, nextMip.size.y);
    glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, nextMip.texture, 0);

    // Render screen-filled quad of resolution of current mip
    glBindVertexArray(m_quadVAO);
    glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
  }

  // Disable additive blending
  // glBlendFunc(GL_ONE, GL_ONE_MINUS_SRC_ALPHA);
  glDisable(GL_BLEND);

  glViewport(0, 0, p_width, p_height);
  glUseProgram(0);

}

void BloomPass::setViewport(uint32_t w, uint32_t h) {}
