#ifndef GRAPHICSCOMPONENT_H_
#define GRAPHICSCOMPONENT_H_

#include "Component.hpp"
#include "Objects/GraphicsObject.hpp"

class GraphicsComponent : public Component {
 public:
  GraphicsObject* grapObj;

  GraphicsComponent();
  virtual ~GraphicsComponent();
};
#endif  // GRAPHICSCOMPONENT_H_
