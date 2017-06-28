#include <iostream>
using namespace std;

#include "EngineManager.h"

int main(int argc, char const *argv[]) {
    cout << "Hello ScriptEngine!" << endl;

    EngineManager mgr(120);
    mgr.Loop();

    return 0;
}