// #ifndef ENTITY_H_
// #define ENTITY_H_

// #include <string>
// #include <vector>

// #include "Components/Component.hpp"

// class Entity {
// public:
//   Entity(i32  ID);

//   ~Entity();
//   Entity(const Entity &) = delete;

//   i32  getID();

//   // Adds component
//   // Can't have more than one type of component!
//   template <typename T> bool addComponent(T *component);

//   // Returns component based on enum ComponentTypeEnum
//   template <typename T> T *getComponent();

//   // Check if component exists
//   bool hasComponent(ComponentType type);

//   // Removes component
//   void removeComponent(ComponentType removeComponent);

//   void setName(std::string name) { m_name = name; };
//   std::string getName() { return m_name; };

//   void makePlayable() { m_playable = true; }
//   bool isPlayable() { return m_playable; }

// private:
//   i32  m_ID;
//   bool m_playable;
//   std::string m_name;
// };
// #endif // ENTITY_H_
