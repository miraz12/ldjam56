#include "ParticlePass.hpp"
#include <ECS/Components/ParticlesComponent.hpp>

ParticlePass::ParticlePass()
    : RenderPass("resources/Shaders/particleVertex.glsl",
                 "resources/Shaders/particleFragment.glsl") {

  p_shaderProgram.setAttribBinding("POSITION");
  p_shaderProgram.setUniformBinding("viewMatrix");
  p_shaderProgram.setUniformBinding("projMatrix");
  p_shaderProgram.setUniformBinding("particlePos");
  p_shaderProgram.setUniformBinding("color");

  uint32_t fbo;
  glGenFramebuffers(1, &fbo);
  p_fboManager.setFBO("particleFBO", fbo);
  uint32_t frameFxaa;
  glGenTextures(1, &frameFxaa);
  p_textureManager.setTexture("frameParticle", frameFxaa, GL_TEXTURE_2D);
  setViewport(p_width, p_height);
}

void ParticlePass::Execute(ECSManager &eManager) {
  p_shaderProgram.use();
  eManager.getCamera().bindProjViewMatrix(p_shaderProgram.getUniformLocation("projMatrix"),
                                          p_shaderProgram.getUniformLocation("viewMatrix"));

  p_fboManager.bindFBO("cubeFBO");

  std::vector<Entity> view = eManager.view<ParticlesComponent>();
  for (auto &e : view) {
    std::shared_ptr<ParticlesComponent> pComp = eManager.getComponent<ParticlesComponent>(e);
    for (auto &p : pComp->getAliveParticles()) {
      if (p->life > 0.0f) {
        glUniform3fv(p_shaderProgram.getUniformLocation("particlePos"), 1,
                     glm::value_ptr(p->position));
        glUniform4fv(p_shaderProgram.getUniformLocation("color"), 1, glm::value_ptr(p->color));
        renderQuad();
      }
    }
  }
}

void ParticlePass::setViewport(uint32_t w, uint32_t h) {
  p_width = w;
  p_height = h;

  p_fboManager.bindFBO("particleFBO");
  uint32_t frameFxaa = p_textureManager.bindTexture("frameParticle");
  glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
  glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
  glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA16F, p_width, p_height, 0, GL_RGBA, GL_FLOAT, nullptr);
  glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, frameFxaa, 0);
  uint32_t attachments[1] = {GL_COLOR_ATTACHMENT0};
  glDrawBuffers(1, attachments);
  // check completion status
  if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE) {
    std::cout << "Framebuffer not complete!" << std::endl;
  }
}

void ParticlePass::renderQuad() {
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
