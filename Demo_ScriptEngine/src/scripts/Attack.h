#ifndef ATTACK_H
#define ATTACK_H

#include "mebc.h"
#include "ScriptBehaviour.h"

/**
 * @brief      Class for attack.
 */
class Attack : public ScriptBehaviour
{
public:
    /**
     * @brief      { function_description }
     *
     * @param      manager  The manager
     */
    Attack(EngineManager* manager);

    /**
     * @brief      { function_description }
     */
    void Start();

    /**
     * @brief      { function_description }
     */
    void Update();

    /**
     * @brief      { function_description }
     */
    void Destroy();

    /**
     * @brief      { function_description }
     */
    void MagicAttack();
};

#endif // ATTACK_H
