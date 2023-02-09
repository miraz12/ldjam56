#include "Game.hpp"

#include <ECS/Components/LightingComponent.hpp>
#include <algorithm>
#include <glm/glm.hpp>

#include "Window.hpp"
#include "glm/geometric.hpp"

Game::Game(GLFWwindow *window)
    : m_window(window), m_ECSManager(&ECSManager::getInstance()),
      m_InputManager(&InputManager::getInstance()) {

  Entity &en0 = m_ECSManager->createEntity();
  en0.setName("Quad");
  GraphicsComponent *graphComp = new GraphicsComponent();
  SimpleShaderProgram *p = new SimpleShaderProgram;
  graphComp->grapObj = new Quad(*p);
  m_ECSManager->addComponent(en0, graphComp);
  PositionComponent *posComp = new PositionComponent();
  posComp->position = glm::vec3(0.0, 0.0, 2.0);
  m_ECSManager->addComponent(en0, posComp);

  MeshShaderProgram *mp = new MeshShaderProgram;
  Mesh *m = new Mesh(*mp);
  // m->LoadFlile("resources/Models/gltf/helmet/DamagedHelmet.glb");
  m->LoadFlile("resources/Models/gltf/sponza/Sponza.gltf");

  // ----
  Entity &en = m_ECSManager->createEntity();
  graphComp = new GraphicsComponent();
  graphComp->grapObj = m;
  m_ECSManager->addComponent(en, graphComp);
  posComp = new PositionComponent();
  // posComp->rotation = 30.0f;
  posComp->scale = glm::vec3(0.008, 0.008, 0.008);
  m_ECSManager->addComponent(en, posComp);

  // // ----
  // Entity &en1 = m_ECSManager->createEntity();
  // graphComp = new GraphicsComponent();
  // graphComp->grapObj = m;
  // m_ECSManager->addComponent(en1, graphComp);
  // posComp = new PositionComponent();
  // posComp->rotation = 30.0f;
  // posComp->position = glm::vec3(1.5, 0.0, 0.0);
  // m_ECSManager->addComponent(en1, posComp);

  // // ----
  // Entity &en2 = m_ECSManager->createEntity();
  // graphComp = new GraphicsComponent();
  // graphComp->grapObj = m;
  // m_ECSManager->addComponent(en2, graphComp);
  // posComp = new PositionComponent();
  // posComp->rotation = 30.0f;
  // posComp->position = glm::vec3(-1.5, 0.0, 0.0);
  // m_ECSManager->addComponent(en2, posComp);

  // ----
  m_ECSManager->SetupDirectionalLight(glm::vec3(1.0f, 1.0f, 1.0f), 0.9f,
                                      glm::vec3(1.0f, -1.0f, 0.0f));

  m_ECSManager->SetupPointLight(glm::vec3(1.0f, .0f, .0f), 1.0f, 0.7f, 1.8f,
                                glm::vec3(0.0f, 1.0f, 0.0f));

  m_ECSManager->SetupPointLight(glm::vec3(.0f, .0f, 1.0f), 1.0f, 0.7f, 1.8f,
                                glm::vec3(1.5f, 1.0f, 0.0f));

  m_ECSManager->SetupPointLight(glm::vec3(.0f, 1.0f, .0f), 1.0f, 0.7f, 1.8f,
                                glm::vec3(-1.5f, 1.0f, 0.0f));
}

void Game::update(float dt) {
  handleInput(dt);
  m_ECSManager->update(dt);
}

void Game::handleInput(float dt) {
  float camSpeed = 1.f;
  Camera &cam = m_ECSManager->getCamera();
  // Parse input
  if (m_InputManager->keys.at(InputManager::KEY::A)) {
    glm::vec3 camPos =
        cam.getPosition() - glm::normalize(glm::cross(cam.getFront(), cam.getUp())) * camSpeed * dt;
    if (!glm::all(glm::isnan(camPos))) {
      cam.setPosition(camPos);
    }
  }
  if (m_InputManager->keys.at(InputManager::KEY::D)) {
    glm::vec3 camPos =
        cam.getPosition() + glm::normalize(glm::cross(cam.getFront(), cam.getUp())) * camSpeed * dt;
    if (!glm::all(glm::isnan(camPos))) {
      cam.setPosition(camPos);
    }
  }
  if (m_InputManager->keys.at(InputManager::KEY::W)) {
    glm::vec3 camPos = cam.getPosition() + cam.getFront() * camSpeed * dt;
    if (!glm::all(glm::isnan(camPos))) {
      cam.setPosition(camPos);
    }
  }
  if (m_InputManager->keys.at(InputManager::KEY::S)) {
    glm::vec3 camPos = cam.getPosition() - cam.getFront() * camSpeed * dt;
    if (!glm::all(glm::isnan(camPos))) {
      cam.setPosition(camPos);
    }
  }
  if (m_InputManager->keys.at(InputManager::KEY::Mouse1)) {
    glm::vec3 direction;
    direction.x = cos(glm::radians(m_yaw)) * cos(glm::radians(m_pitch));
    direction.y = sin(glm::radians(m_pitch));
    direction.z = sin(glm::radians(m_yaw)) * cos(glm::radians(m_pitch));
    glm::vec3 cameraFront = glm::normalize(direction);
    cam.setFront(cameraFront);
  }
}

void Game::setViewport(unsigned int w, unsigned int h) {
  m_ECSManager->getLightingSystem()->setViewport(w, h);
}

Game::~Game() {}
