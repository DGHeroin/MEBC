#include "IEntity.h"

IEntity::IEntity() :
    IObject()
{

}

IEntity::~IEntity() {}

void IEntity::AddBehaviour(IBehaviour *behaviour) {
    m_behavioures.push_back(behaviour);
}

void IEntity::AddComponent(IComponent *comp) {
    m_components.push_back(comp);
}