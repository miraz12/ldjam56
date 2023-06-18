#ifndef PHYSICSCOMPONENT_H_
#define PHYSICSCOMPONENT_H_

#include "Component.hpp"
#include <BulletCollision/CollisionShapes/btCollisionShape.h>
#include <BulletCollision/CollisionShapes/btSphereShape.h>
#include <BulletDynamics/Dynamics/btRigidBody.h>
#include <ECS/Components/GraphicsComponent.hpp>
#include <ECS/Components/PositionComponent.hpp>
#include <LinearMath/btDefaultMotionState.h>
#include <memory>

class PhysicsComponent : public Component {
public:
  PhysicsComponent();
  // Create colision mesh from grapComp and give position
  PhysicsComponent(std::shared_ptr<PositionComponent> posComp, float mass,
                   std::shared_ptr<GraphicsComponent> graphComp);
  ~PhysicsComponent();
  btRigidBody *getRigidBody() { return body; }

private:
  void init(std::shared_ptr<GraphicsComponent> graphComp);

  btRigidBody *body;
  btTransform startTransform;
  btVector3 initialPos{0., 0., 0.};
  btVector3 initialScale{1., 1., 1.};
  btQuaternion initialRotation{1., 1., 1., 1.};
  btScalar mass;
  btCollisionShape *colShape;
  btDefaultMotionState *myMotionState;
};

#endif // PHYSICSCOMPONENT_H_
