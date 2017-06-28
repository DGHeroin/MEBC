#ifndef __I_COMPONENT_H__
#define __I_COMPONENT_H__

#include "IObject.h"

/**
 * @brief      Class for component.
 */
class IComponent : public IObject
{
public:
    /**
     * @brief      { ctor }
     */
    IComponent();
    /**
     * @brief      Destroys the object.
     */
    virtual ~IComponent(){}

};


#endif // __I_COMPONENT_H__
