#pragma once
#include <iostream>

class Aimbot {
public:
    bool enabled = false;
    float fov = 20.0f;
    float smoothX = 1.5f;
    float smoothY = 1.5f;
    float maxDistance = 200.0f;
    bool onlyVisible = true;

    void run();
    void printConfig();
}
