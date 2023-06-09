#ifndef RENDERPASS_H_
#define RENDERPASS_H_
#include "Managers/FrameBufferManager.hpp"
#include "ShaderPrograms/ShaderProgram.hpp"
#include <Managers/TextureManager.hpp>

class ECSManager;
class FrameGraph;

class RenderPass {
public:
  RenderPass() = delete;
  RenderPass(std::string vs, std::string fs);
  virtual ~RenderPass() = default;
  virtual void Execute(ECSManager &eManager) = 0;
  virtual void setViewport(uint32_t /* w */, uint32_t /* h */){};
  virtual void Init(FrameGraph & /* fGraph */){};
  void addTexture(std::string texName);

protected:
  uint32_t p_width{800}, p_height{800};
  ShaderProgram p_shaderProgram;
  FrameBufferManager &p_fboManager;
  TextureManager &p_textureManager;
  std::vector<std::string> p_textures;
};

#endif // RENDERPASS_H_
