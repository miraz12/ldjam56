#ifndef TAAPASS_H_
#define TAAPASS_H_

#include <ECS/ECSManager.hpp>
#include <RenderPasses/RenderPass.hpp>

class TaaPass : public RenderPass {
public:
  TaaPass();
  virtual ~TaaPass() = default;
  void Execute(ECSManager &eManager) override;
  void setViewport(uint32_t w, uint32_t h) override;

private:
  void renderQuad();
};

#endif // TAAPASS_H_
