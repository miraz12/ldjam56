#ifndef GAME_H_
#define GAME_H_

#include "InputManager.hpp"
#include <API.hpp>

class Game {
public:
  Game(GLFWwindow &window);
  ~Game() = default;

  void update(float dt);
  void reset();
  void setViewport(u32 w, u32 h);
  InputManager &getInputManager() { return m_inputManager; };

  // Dir light
  // std::shared_ptr<DirectionalLight> dLight;
  // TODO: Dont hardcode this as it defeats the purpose of having dir light set
  // in scene file
  glm::vec3 dirLightColor{0.988f, 0.898f, 0.439f};
  float dirLightAmbient{0.1};
  glm::vec3 dirLightDir{0.01, -1.0, 0.0};
  Entity selectedEntity{0};
  API::ECS &m_ECSManager;

private:
  void init();
  void setupEntities();
  void handleInput(float dt);

  GLFWwindow &m_window;
  InputManager &m_inputManager;
};

#endif // GAME_H_
