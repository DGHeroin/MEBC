#include "Walk.h"
#include <iostream>
using namespace std;

/**
 * @brief      Constructs the object.
 *
 * @param      manager  The manager
 */
Walk::Walk(EngineManager* manager) :
    ScriptBehaviour(manager)
{}

/**
 * @brief      { function_description }
 */
void Walk::Update() {
    cout << "Walk..." << endl;
}