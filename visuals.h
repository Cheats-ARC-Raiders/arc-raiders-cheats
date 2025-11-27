#pragma once
#include <iostream>

class Visuals {
public:
    bool box = true;
    bool healthBar = true;
    bool nickname = true;
    bool skeleton = false;
    bool visibleCheck = true;
    bool lootESP = true;
    bool droneESP = true;

    void run();
    void printConfig();
};
