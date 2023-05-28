#ifndef MESHOBJ_H_
#define MESHOBJ_H_

#include <Rendering/Primitive.hpp>
#include <ShaderPrograms/ShaderProgram.hpp>
#include <cstddef>
#include <cstdint>
#include <glm/glm.hpp>
#include <map>
#include <vector>

class Mesh {
public:
  Mesh() = default;
  virtual ~Mesh() = default;
  uint32_t numPrims{0};
  std::unique_ptr<Primitive[]> m_primitives;
};

#endif // MESHOBJ_H_
