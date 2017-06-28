#ifndef __I_OBJECT_H__
#define __I_OBJECT_H__

#include <stdint.h>
#include <list>

/**
 * @brief      Class for object.
 */
class IObject {
public:
    /**
     * @brief      { ctor }
     */
    IObject();

    /**
     * @brief      Gets the id.
     *
     * @return     The id.
     */
    uint64_t GetID();
protected:
    /**
     * { Object's id }
     */
    uint64_t id;
};


#endif // __I_OBJECT_H__
