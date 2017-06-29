#ifndef WALK_H
#define WALK_H

#include "ScriptBehaviour.h"

/**
 * @brief      Class for walk.
 */
class Walk : public ScriptBehaviour
{
public:
    /**
     * @brief      { function_description }
     *
     * @param      manager  The manager
     */
    Walk(EngineManager* manager);

    /**
     * @brief      { function_description }
     */
    void Update();
};

#endif // WALK_H
