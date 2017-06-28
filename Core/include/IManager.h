#ifndef __I_MANAGER_H__
#define __I_MANAGER_H__

#include "IObject.h"

/**
 * @brief      Class for manager.
 */
class IManager : public IObject
{
public:
    /**
     * @brief      { ctor }
     */
    IManager();

    /**
     * @brief      Destroys the object.
     */
    ~IManager();

};


#endif // __I_MANAGER_H__
