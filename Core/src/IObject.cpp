#include "IObject.h"

#include <atomic>

static uint64_t GenerateID() {
    static std::atomic<int> i;
    return i++;
}


IObject::IObject() :
    id(GenerateID())
{

}

uint64_t IObject::GetID() {
    return id;
}