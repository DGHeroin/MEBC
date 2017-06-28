#ifndef __I_SYSTEM_H__
#define __I_SYSTEM_H__

#include "IObject.h"
#include <list>

class IBehaviour : public IObject
{
public:
    IBehaviour();
    virtual ~IBehaviour() {}
};


#endif // __I_SYSTEM_H__
