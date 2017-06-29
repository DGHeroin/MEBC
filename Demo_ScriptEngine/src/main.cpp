#include <iostream>
using namespace std;

#include "EngineManager.h"
#include "Player.h"
#include "Attack.h"
#include "Walk.h"

/**
 * @brief      { function_description }
 *
 * @param[in]  argc  The argc
 * @param      argv  The argv
 *
 * @return     { description_of_the_return_value }
 */
int main(int argc, char const *argv[]) {
    cout << "Hello ScriptEngine!" << endl;

    EngineManager mgr(1);

    Player player;
    player.AddBehaviour(new Attack(&mgr));
    player.AddBehaviour(new Walk(&mgr));

    mgr.Loop();

    return 0;
}