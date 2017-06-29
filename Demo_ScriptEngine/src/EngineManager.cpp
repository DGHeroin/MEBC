#include "EngineManager.h"
#include "ScriptBehaviour.h"
#include <unistd.h>
#include <iostream>
using namespace std;

EngineManager *EngineManager::g_loopManager;

EngineManager::EngineManager(int hz) {
    if (g_loopManager == nullptr) {
        g_loopManager = this;
    }
    m_HZ = hz;
    m_isPause = false;
    m_timeDurationPerTick = (float)(1.0/m_HZ);
}

void EngineManager::Loop() {
    m_isRunning = true;

    m_tickStartTime = clock();

    while(m_isRunning) {
        m_FPS = CalcTickTimeLeft() / m_timeDurationPerTick * m_HZ;

        m_tickStartTime = clock();
        if (m_isPause) {
            WaitToNextTick();
            continue;
        }
        // behaviour life cycle
        do {
            // Call Start
            for(ScriptBehaviour* behaviour : m_behavioursInvakeStart) {
                behaviour->Start();
                if (!behaviour->IsDestroyed()) {
                    m_behavioursInvakeUpdate.push_back(behaviour);
                } else {
                    m_behavioursInvakeDestroy.push_back(behaviour);
                }
            }
            m_behavioursInvakeStart.clear();
            // Call Update
            std::list<ScriptBehaviour*> nextUpdateScripts;
            nextUpdateScripts.clear();
            for(ScriptBehaviour* behaviour : m_behavioursInvakeUpdate) {
                behaviour->Update();
                if (behaviour->IsDestroyed()) {
                    m_behavioursInvakeDestroy.push_back(behaviour);
                } else {
                    nextUpdateScripts.push_back(behaviour);
                }
            }
            m_behavioursInvakeUpdate.clear();
            m_behavioursInvakeUpdate = nextUpdateScripts;
            // Call Destroy
            for(ScriptBehaviour* behaviour : m_behavioursInvakeDestroy) {
                behaviour->Destroy();
            }
            m_behavioursInvakeDestroy.clear();
        } while(0);
        WaitToNextTick();
    }
}

void EngineManager::AddScriptBehaviour(ScriptBehaviour* behaviour) {
    m_behavioursInvakeStart.push_back(behaviour);
}

EngineManager* EngineManager::GetDefaultLoopManager() {
    if (g_loopManager == nullptr) {
        g_loopManager = new EngineManager(60);
    }
    return g_loopManager;
}

float EngineManager::CalcTickTimeLeft() {
    clock_t now = clock();
    return (float) m_timeDurationPerTick - float(now - m_tickStartTime) / CLOCKS_PER_SEC;
}

void EngineManager::WaitToNextTick() {
    unsigned int microseconds = 0;
    float t = CalcTickTimeLeft();
    if (t > 0) {
        microseconds = t * 1000 * 1000;
    }
    usleep(microseconds);
}

bool EngineManager::IsTickTimeRunOut() {
    if (CalcTickTimeLeft() <= 0) {
        return true;
    }
    return false;
}