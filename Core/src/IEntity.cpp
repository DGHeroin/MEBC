#include "IEntity.h"

/**
 * @brief      Constructs the object.
 */
IEntity::IEntity() :
    IObject()
{

}

/**
 * @brief      Destroys the object.
 */
IEntity::~IEntity() {}

/**
 * @brief      Adds a behaviour.
 *
 * @param      behaviour  The behaviour
 */
void IEntity::AddBehaviour(IBehaviour *behaviour) {
    m_behavioures.push_back(behaviour);
}

/**
 * @brief      Adds a component.
 *
 * @param      comp  The component
 */
void IEntity::AddComponent(IComponent *comp) {
    m_components.push_back(comp);
}