#ifndef SCRIPT_BEHAVIOUR_H
#define SCRIPT_BEHAVIOUR_H

#include "mebc.h"

class ScriptBehaviour : public IBehaviour
{
public:
    ScriptBehaviour();
    virtual void Start() {}
    virtual void Update() {}
    virtual void Destroy() {}

    bool IsDestroyed() {
        return m_isDestroy;
    }
    static void DestroyBehaviour(ScriptBehaviour* behaviour) {
        behaviour->m_isDestroy = true;
    }

private:
    bool m_isDestroy;
};

#endif // SCRIPT_BEHAVIOUR_H
