#include "TaaPass.hpp"

TaaPass::TaaPass()
    : RenderPass("resources/Shaders/vertex2D.glsl", "resources/Shaders/TaaFragment.glsl") {

  p_shaderProgram.setAttribBinding("POSITION");
  p_shaderProgram.setAttribBinding("TEXCOORD_0");
  p_shaderProgram.setUniformBinding("scene");
  p_shaderProgram.setUniformBinding("prevScene");

  uint32_t fbo[2];
  glGenFramebuffers(2, fbo);
  p_fboManager.setFBO("TaaFBO", fbo[0]);
  uint32_t frameTaa;
  glGenTextures(1, &frameTaa);
  p_textureManager.setTexture("frameTaa", frameTaa, GL_TEXTURE_2D);

  p_fboManager.setFBO("prevFrameFBO", fbo[1]);
  uint32_t prevFrameFxaa;
  glGenTextures(1, &prevFrameFxaa);
  p_textureManager.setTexture("prevFrameFxaa", prevFrameFxaa, GL_TEXTURE_2D);

  setViewport(p_width, p_height);
}

void TaaPass::Execute(ECSManager & /* eManager */) {
  p_fboManager.bindFBO("TaaFBO");
  p_shaderProgram.use();
  glUniform1i(p_shaderProgram.getUniformLocation("scene"), 0);
  glUniform1i(p_shaderProgram.getUniformLocation("prevScene"), 1);

  p_textureManager.bindActivateTexture("frameFxaa", 0);
  p_textureManager.bindActivateTexture("prevFrameFxaa", 1);
  renderQuad();

  glBindFramebuffer(GL_READ_FRAMEBUFFER, p_fboManager.getFBO("TaaFBO"));
  glBindFramebuffer(GL_DRAW_FRAMEBUFFER, p_fboManager.getFBO("prevFrameFBO"));
  glBlitFramebuffer(0, 0, p_width, p_height, 0, 0, p_width, p_height, GL_COLOR_BUFFER_BIT,
                    GL_NEAREST);
}

void TaaPass::setViewport(uint32_t w, uint32_t h) {
  p_width = w;
  p_height = h;

  p_fboManager.bindFBO("TaaFBO");
  uint32_t frameTaa = p_textureManager.bindTexture("frameTaa");
  glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
  glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
  glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA16F, p_width, p_height, 0, GL_RGBA, GL_FLOAT, nullptr);
  glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, frameTaa, 0);

  uint32_t attachments[1] = {GL_COLOR_ATTACHMENT0};
  glDrawBuffers(1, attachments);
  // check completion status
  if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE) {
    std::cout << "Framebuffer not complete!" << std::endl;
  }

  p_fboManager.bindFBO("prevFrameFBO");
  uint32_t prevFrameFxaa = p_textureManager.bindTexture("prevFrameFxaa");
  glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
  glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
  glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA16F, p_width, p_height, 0, GL_RGBA, GL_FLOAT, nullptr);
  glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, prevFrameFxaa, 0);

  glDrawBuffers(1, attachments);
  // check completion status
  if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE) {
    std::cout << "Framebuffer not complete!" << std::endl;
  }
}

void TaaPass::renderQuad() {
  static uint32_t quadVAO = 0;
  static uint32_t quadVBO = 0;
  if (quadVAO == 0) {
    float quadVertices[] = {
        // positions        // texture Coords
        -1.0f, 1.0f, 0.0f, 0.0f, 1.0f, -1.0f, -1.0f, 0.0f, 0.0f, 0.0f,
        1.0f,  1.0f, 0.0f, 1.0f, 1.0f, 1.0f,  -1.0f, 0.0f, 1.0f, 0.0f,
    };

    // setup plane VAO
    glGenVertexArrays(1, &quadVAO);
    glGenBuffers(1, &quadVBO);
    glBindVertexArray(quadVAO);
    glBindBuffer(GL_ARRAY_BUFFER, quadVBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(quadVertices), &quadVertices, GL_STATIC_DRAW);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void *)0);
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void *)(3 * sizeof(float)));
  }
  glBindVertexArray(quadVAO);
  glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
}
