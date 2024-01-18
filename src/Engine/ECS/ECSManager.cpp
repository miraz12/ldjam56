#include "ECSManager.hpp"

ECSManager::ECSManager() { initializeSystems(); }

ECSManager::~ECSManager() {}

void ECSManager::initializeSystems() {
  m_systems["PHYSICS"] = &PhysicsSystem::getInstance();
  m_systems["POSITION"] = &PositionSystem::getInstance();
  m_systems["PARTICLES"] = &ParticleSystem::getInstance();
  m_systems["GRAPHICS"] = &GraphicsSystem::getInstance();
  for (auto &s : m_systems) {
    s.second->initialize(*this);
  }
}

void ECSManager::update(float dt) {
  // update all systems
  for (auto &s : m_systems) {
    s.second->update(dt);
  }
}

Entity ECSManager::createEntity(std::string name) {
  Entity newEntity = ++m_entityCount;
  m_components[newEntity] =
      std::vector<std::shared_ptr<Component>>(MAX_COMPONENTS, nullptr);
  m_entities.push_back(newEntity);
  m_entityNames[newEntity] = name;
  return m_entities.back();
}

std::shared_ptr<PointLight>
ECSManager::SetupPointLight(Entity en, glm::vec3 color, float constant,
                            float linear, float quadratic, glm::vec3 pos) {
  std::shared_ptr<PointLight> pLight = std::make_shared<PointLight>();
  pLight->position = pos;
  pLight->color = color;
  pLight->constant = constant;
  pLight->linear = linear;
  pLight->quadratic = quadratic;
  addComponent(en, std::make_shared<LightingComponent>(
                       pLight, LightingComponent::TYPE::POINT));
  return pLight;
}

std::shared_ptr<DirectionalLight>
ECSManager::SetupDirectionalLight(Entity en, glm::vec3 color, float ambient,
                                  glm::vec3 dir) {
  m_dirLightEntity = en;
  std::shared_ptr<DirectionalLight> dLight =
      std::make_shared<DirectionalLight>();
  dLight->direction = dir;
  dLight->color = color;
  dLight->ambientIntensity = ambient;
  addComponent(m_dirLightEntity,
               std::make_shared<LightingComponent>(
                   dLight, LightingComponent::TYPE::DIRECTIONAL));
  return dLight;
}

void ECSManager::updateDirLight(glm::vec3 color, float ambient, glm::vec3 dir) {

  std::shared_ptr<LightingComponent> lComp =
      getComponent<LightingComponent>(m_dirLightEntity);
  DirectionalLight *dLight =
      static_cast<DirectionalLight *>(&lComp->getBaseLight());
  dLight->direction = dir;
  dLight->color = color;
  dLight->ambientIntensity = ambient;
}

void ECSManager::setViewport(u32 w, u32 h) {
  m_camera.setSize(w, h);
  static_cast<GraphicsSystem *>(m_systems["GRAPHICS"])->setViewport(w, h);
};

void ECSManager::loadScene(std::string_view file) {
  SceneLoader::getInstance().init(file);
};
void ECSManager::saveScene(std::string_view file) {
  SceneLoader::getInstance().saveScene(file);
};

API::ECS &API::ECS::getECS() { return ECSManager::getInstance(); };
