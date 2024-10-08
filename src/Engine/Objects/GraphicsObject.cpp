#include "GraphicsObject.hpp"

void GraphicsObject::newNode(glm::mat4 model) {
  size_t idx = p_nodes.size();
  p_nodes.push_back(std::make_unique<Node>());
  p_nodes[idx]->mesh = 0;
  p_nodes[idx]->nodeMat = model;
}

void GraphicsObject::draw(const ShaderProgram &sPrg) {
  for (auto &n : p_nodes) {
    glUniformMatrix4fv(sPrg.getUniformLocation("meshMatrix"), 1, GL_FALSE,
                       glm::value_ptr(n->nodeMat));
    Mesh &m = p_meshes[n->mesh];
    for (u32 i = 0; i < m.numPrims; i++) {
      Material *mat = m.m_primitives[i].m_material > -1
                          ? &p_materials[m.m_primitives[i].m_material]
                          : &defaultMat;
      mat->bind(sPrg);
      m.m_primitives[i].draw();
    }
  }
}
void GraphicsObject::drawGeom(const ShaderProgram &sPrg) {
  for (auto &n : p_nodes) {
    glUniformMatrix4fv(sPrg.getUniformLocation("meshMatrix"), 1, GL_FALSE,
                       glm::value_ptr(n->nodeMat));
    Mesh &m = p_meshes[n->mesh];

    for (u32 i = 0; i < m.numPrims; i++) {
      m.m_primitives[i].draw();
    }
  }
}
