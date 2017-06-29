#include "ScriptBehaviour.h"
#include "EngineManager.h"

/**
 * @brief      Constructs the object.
 */
ScriptBehaviour::ScriptBehaviour(EngineManager *manager) :
    IBehaviour(),
    m_isDestroy(false),
    m_engineManager(manager)
{
    manager->AddScriptBehaviour(this);
}