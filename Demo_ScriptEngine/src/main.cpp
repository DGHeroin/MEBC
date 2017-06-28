#include <iostream>
using namespace std;

#include "EngineManager.h"

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

    EngineManager mgr(120);
    mgr.Loop();

    return 0;
}