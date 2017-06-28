#ifndef SCRIPT_BEHAVIOUR_H
#define SCRIPT_BEHAVIOUR_H

#include "mebc.h"

/**
 * @brief      Class for script behaviour.
 */
class ScriptBehaviour : public IBehaviour
{
public:
    /**
     * @brief      { ctor }
     */
    ScriptBehaviour();

    /**
     * @brief      { Start Callback }
     */
    virtual void Start() {}

    /**
     * @brief      { Update Callback }
     */
    virtual void Update() {}

    /**
     * @brief      { Destroy Callback }
     */
    virtual void Destroy() {}

    /**
     * @brief      Determines if destroyed.
     *
     * @return     True if destroyed, False otherwise.
     */
    bool IsDestroyed() {
        return m_isDestroy;
    }

    /**
     * @brief      { Destroy A ScriptBehaviour }
     *
     * @param      behaviour  The behaviour
     */
    static void DestroyBehaviour(ScriptBehaviour* behaviour) {
        behaviour->m_isDestroy = true;
    }

private:
    /**
     * { It's this Class need to Destroy }
     */
    bool m_isDestroy;
};

#endif // SCRIPT_BEHAVIOUR_H
