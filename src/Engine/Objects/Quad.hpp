#pragma once

#include "GraphicsObject.hpp"
#include <ShaderPrograms/SimpleShaderProgram.hpp>
#include <glm/glm.hpp>

struct InstanceData;

class Quad : public GraphicsObject {
public:
  Quad(ShaderProgram& prog);
  virtual ~Quad();
  void draw() override;

  glm::mat4 &getModelMatrix();
  unsigned int getQuadIndex();
  void setTextureIndex(unsigned int index);

private:

    float m_vertices[20] = {
        -0.5f, -0.5f, 0.0f,     0.0f, 1.0f,
         0.5f, -0.5f, 0.0f,     1.0f, 1.0f,
        -0.5f,  0.5f, 0.0f,     0.0f, 0.0f,
         0.5f,  0.5f, 0.0f,     1.0f, 0.0f,
    };

    unsigned int m_indices[6] = {
        0, 1, 2,
        2, 1, 3,
    };
};
