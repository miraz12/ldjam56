#include "PhysicsComponent.hpp"

#include "DebugComponent.hpp"
#include <ECS/ECSManager.hpp>
#include <ECS/Systems/PhysicsSystem.hpp>
#include <Objects/Cube.hpp>

PhysicsComponent::PhysicsComponent() { init(); }

PhysicsComponent::~PhysicsComponent() {
  delete colShape;
  delete body;
  delete myMotionState;
};

PhysicsComponent::PhysicsComponent(Entity en, float mass)
    : mass(mass), m_en(en) {
  init();
}

void PhysicsComponent::init() {
  // create a dynamic rigidbody
  std::shared_ptr<GraphicsComponent> graphComp =
      ECSManager::getInstance().getComponent<GraphicsComponent>(m_en);
  std::shared_ptr<PositionComponent> posComp =
      ECSManager::getInstance().getComponent<PositionComponent>(m_en);

  if (posComp) {
    initialPos = btVector3(posComp->position.x, posComp->position.y,
                           posComp->position.z);
    // HACK: Changed rotation axels to work with plane..
    initialScale =
        btVector3(posComp->scale.x, posComp->scale.z, posComp->scale.y);
    initialRotation = btQuaternion(posComp->rotation.x, posComp->rotation.y,
                                   posComp->rotation.z, posComp->rotation.w);
  }

  if (graphComp) {
    colShape = graphComp->m_grapObj->p_coll;
    colShape->setLocalScaling(initialScale);

    ECSManager &eManager = ECSManager::getInstance();
    // BUG: Cant remove this without breaking debug draw?
    // std::shared_ptr<DebugComponent> dComp =
    //     std::make_shared<DebugComponent>(Cube());

    /// Create Dynamic Objects
    startTransform.setIdentity();

    // rigidbody is dynamic if and only if mass is non zero, otherwise static
    bool isDynamic = (mass != 0.f);

    btVector3 localInertia(0, 0, 0);
    if (isDynamic)
      colShape->calculateLocalInertia(mass, localInertia);

    startTransform.setOrigin(initialPos);
    startTransform.setRotation(initialRotation);

    // using motionstate is recommended, it provides interpolation capabilities,
    // and only synchronizes 'active' objects
    myMotionState = new btDefaultMotionState(startTransform);
    btRigidBody::btRigidBodyConstructionInfo rbInfo(mass, myMotionState,
                                                    colShape, localInertia);
    body = new btRigidBody(rbInfo);

    body->setUserIndex(m_en);

    auto &pSys = dynamic_cast<PhysicsSystem &>(eManager.getSystem("PHYSICS"));
    pSys.addRigidBody(body);
    initialized = true;
  } else {
    colShape =
        new btBoxShape(btVector3(btScalar(1.), btScalar(1.), btScalar(1.)));
    /// Create Dynamic Objects
    startTransform.setIdentity();

    // rigidbody is dynamic if and only if mass is non zero, otherwise static
    bool isDynamic = (mass != 0.f);

    btVector3 localInertia(0, 0, 0);
    if (isDynamic)
      colShape->calculateLocalInertia(mass, localInertia);

    startTransform.setOrigin(initialPos);
    startTransform.setRotation(initialRotation);

    // using motionstate is recommended, it provides interpolation capabilities,
    // and only synchronizes 'active' objects
    myMotionState = new btDefaultMotionState(startTransform);
    btRigidBody::btRigidBodyConstructionInfo rbInfo(mass, myMotionState,
                                                    colShape, localInertia);
    body = new btRigidBody(rbInfo);

    body->setUserIndex(m_en);

    ECSManager &eManager = ECSManager::getInstance();
    auto &pSys = dynamic_cast<PhysicsSystem &>(eManager.getSystem("PHYSICS"));
    pSys.addRigidBody(body);
    initialized = true;
  }
}
