#include "olcConsoleGameEngine.h"

class Engine : public olcConsoleGameEngine {



};


int main() {

    Engine demo;

    demo.ConstructConsole(256, 240, 4, 4);
    demo.start();

}
