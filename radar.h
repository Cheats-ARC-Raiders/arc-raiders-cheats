#pragma once
#include <iostream>

class Radar {
public:
    bool enabled = true;

    void run();
    void printConfig();
};
