#ifndef __ENGINE_MANAGER_H__
#define __ENGINE_MANAGER_H__

#include "ScriptBehaviour.h"
#include <list>
#include <ctime>

/**
 * @brief      Class for engine manager.
 */
class EngineManager
{
public:
    /**
     * @brief      { ctor }
     *
     * @param[in]  tickHZ  The tick hz
     */
    EngineManager(int tickHZ);

    /**
     * @brief      { 引擎主循环 }
     */
    void Loop();

    /**
     * @brief      { 暂停引擎 }
     */
    void Pause();

    /**
     * @brief      { 停止引擎 }
     */
    void Stop();

    /**
     * @brief      Adds a script behaviour.
     *
     * @param      behaviour  The behaviour
     */
    void AddScriptBehaviour(ScriptBehaviour* behaviour);

    /**
     * @brief      Gets the default loop manager.
     *
     * @return     The default loop manager.
     */
    static EngineManager* GetDefaultLoopManager();
private:
    /**
     * @brief      Calculates the tick time left.
     *
     * @return     The tick time left.
     */
    float CalcTickTimeLeft();

    /**
     * @brief      { function_description }
     */
    void WaitToNextTick();

    /**
     * @brief      Determines if tick time run out.
     *
     * @return     True if tick time run out, False otherwise.
     */
    bool IsTickTimeRunOut();
private:
    /**
     * { 每秒运行频率 }
     */
    int m_HZ;

    /**
     * { item_description }
     */
    double m_timeElapsed;

    /**
     * { 需要运行 Start 的ScriptBehaviour }
     */
    std::list<ScriptBehaviour*> m_behavioursInvakeStart;

    /**
     * { 需要运行 Update 的ScriptBehaviour }
     */
    std::list<ScriptBehaviour*> m_behavioursInvakeUpdate;

    /**
     * { 需要运行 Destroy 的ScriptBehaviour }
     */
    std::list<ScriptBehaviour*> m_behavioursInvakeDestroy;

    /**
     * { 默认引擎管理器 }
     */
    static EngineManager* g_loopManager;

    /**
     * { 引擎是否在运行 }
     */
    bool m_isRunning;

    /**
     * { 引擎是否暂停 }
     */
    bool m_isPause;

    /**
     * { 当前 Tick 开始时间 }
     */
    clock_t m_tickStartTime;

    /**
     * { item_description }
     */
    float m_timeDurationPerTick;

    /**
     * { item_description }
     */
    float m_timeElapsedInPerTick;

    /**
     * { the FPS }
     */
    float m_FPS;
};

#endif // __ENGINE_MANAGER_H__
