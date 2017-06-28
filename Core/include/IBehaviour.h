#ifndef __I_SYSTEM_H__
#define __I_SYSTEM_H__

#include "IObject.h"
#include <list>

/**
 * @brief      Class for behaviour.
 */
class IBehaviour : public IObject
{
public:
    /**
     * @brief      { ctor }
     */
    IBehaviour();

    /**
     * @brief      Destroys the object.
     */
    virtual ~IBehaviour() {}
};


#endif // __I_SYSTEM_H__
