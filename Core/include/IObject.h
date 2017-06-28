#ifndef __I_OBJECT_H__
#define __I_OBJECT_H__

#include <stdint.h>
#include <list>

class IObject {
public:
    IObject();
    uint64_t GetID();
protected:
    uint64_t id;
};


#endif // __I_OBJECT_H__
