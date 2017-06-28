#ifndef __ENGINE_MANAGER_H__
#define __ENGINE_MANAGER_H__

#include "ScriptBehaviour.h"
#include <list>
#include <ctime>

class EngineManager
{
public:
    EngineManager(int tickHZ);
    void Loop();
    void Pause();
    void Stop();
    void AddScriptBehaviour(ScriptBehaviour* behaviour);

    static EngineManager* GetDefaultLoopManager();
private:
    float CalcTickTimeLeft();
    void WaitToNextTick();
    bool IsTickTimeRunOut();
private:
    int m_HZ;
    double m_timeElapsed;

    std::list<ScriptBehaviour*> m_behavioursInvakeStart;
    std::list<ScriptBehaviour*> m_behavioursInvakeUpdate;
    std::list<ScriptBehaviour*> m_behavioursInvakeDestroy;

    static EngineManager* g_loopManager;

    bool m_isRunning;
    bool m_isPause;

    clock_t m_tickStartTime;
    float m_timeDurationPerTick;
    float m_timeElapsedInPerTick;
    float m_FPS;
};

#endif // __ENGINE_MANAGER_H__
