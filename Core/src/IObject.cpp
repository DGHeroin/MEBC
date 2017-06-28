#include "IObject.h"

#include <atomic>

/**
 * @brief      { Generate a ID }
 *
 * @return     { uint64_t the uniq id }
 */
static uint64_t GenerateID() {
    static std::atomic<int> i;
    return i++;
}

/**
 * @brief      Constructs the object.
 */
IObject::IObject() :
    id(GenerateID())
{

}

/**
 * @brief      Gets the id.
 *
 * @return     The id.
 */
uint64_t IObject::GetID() {
    return id;
}