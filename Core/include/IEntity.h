#ifndef __I_ENTITY_H__
#define __I_ENTITY_H__

#include <list>
#include <vector>
#include "IObject.h"
#include "IBehaviour.h"
#include "IComponent.h"

/**
 * @brief      Class for entity.
 */
class IEntity : public IObject
{
public:
    /**
     * @brief      { function_description }
     */
    IEntity();

    /**
     * @brief      Destroys the object.
     */
    ~IEntity();

    /**
     * @brief      Adds a component.
     *
     * @param      component  The component
     */
    void AddComponent(IComponent* component);

    /**
     * @brief      Gets the component.
     *
     * @tparam     T     is IComponent
     *
     * @return     The component.
     */
    template<typename T>
    T* GetComponent() {
        for(IComponent* comp : m_components) {
            T* target = dynamic_cast<T*>(comp);
            if (target != nullptr) {
                return target;
            }
        }
        return nullptr;
    }

    /**
     * @brief      Gets the components.
     *
     * @tparam     T     { description }
     *
     * @return     The components.
     */
    template<typename T>
    std::vector<T*> GetComponents() {
        std::vector<T*> targets;
        for(IComponent* comp : m_components) {
            T* target = dynamic_cast<T*>(comp);
            if (target != nullptr) {
                targets.push_back(target);
            }
        }
        return targets;
    }

    /**
     * @brief      Adds a behaviour.
     *
     * @param[in]  behaviour  The behaviour
     */
    void AddBehaviour(IBehaviour* behaviour);

    /**
     * @brief      Gets the behaviour.
     *
     * @tparam     T     { description }
     *
     * @return     The behaviour.
     */
    template<typename T>
    T* GetBehaviour() {
        for(IBehaviour* behaviour : m_behavioures) {
            T* target = dynamic_cast<T*>(behaviour);
            if (target != nullptr) {
                return target;
            }
        }
        return nullptr;
    }

    /**
     * @brief      Gets the behaviours.
     *
     * @tparam     T     { description }
     *
     * @return     The behaviours.
     */
    template<typename T>
    std::vector<T*> GetBehaviours() {
        std::vector<T*> targets;
        for(IBehaviour* behaviour : m_behavioures) {
            T* target = dynamic_cast<T*>(behaviour);
            if (target != nullptr) {
                targets.push_back(target);
            }
        }
        return targets;
    }

private:
    /**
     * { Behaviours }
     */
    std::list<IBehaviour*> m_behavioures;

    /**
     * { Components }
     */
    std::list<IComponent*> m_components;
};

#endif // __I_ENTITY_H__
