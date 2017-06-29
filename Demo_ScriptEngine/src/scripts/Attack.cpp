#include "Attack.h"
#include <iostream>
using namespace std;

/**
 * @brief      Constructs the object.
 *
 * @param      manager  The manager
 */
Attack::Attack(EngineManager* manager) :
    ScriptBehaviour(manager)
{}

/**
 * @brief      { function_description }
 */
void Attack::Start() {
    cout << "Attack function Start." << endl;
}

/**
 * @brief      { function_description }
 */
void Attack::Update() {
    cout << "Attack function Update." << endl;
    MagicAttack();
}

/**
 * @brief      { function_description }
 */
void Attack::MagicAttack() {
    cout << "Perform Maginc Attack!" << endl;
    DestroyBehaviour(this);
}

/**
 * @brief      { function_description }
 */
void Attack::Destroy() {
    cout << "Attack function Destroy." << endl;
}

