#pragma once

#ifdef _WIN32
#include <windows.h>
#endif

// enum class containing all types of components. Add new enum if new component
// type is created
enum class ComponentTypeEnum {
  GRAPHICS,
  POSITION,
  CAMERAFOCUS,
};

// Basic component interface which all other components implement
class Component {
 public:
  Component() = default;
  virtual ~Component() = default;
  virtual ComponentTypeEnum getComponentType() { return m_componentType; }

 protected:
  ComponentTypeEnum m_componentType;
};
