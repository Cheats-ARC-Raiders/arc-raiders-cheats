#include "aimbot.h"

void Aimbot::run() {
    if (!enabled) return;
    // Mock aimbot loop
    std::cout << "[Aimbot] Running (mock)" << std::endl;
}

void Aimbot::printConfig() {
    std::cout << "Aimbot Enabled: " << enabled << " | FOV: " << fov
              << " | SmoothX: " << smoothX << " | SmoothY: " << smoothY
              << " | MaxDistance: " << maxDistance
              << " | OnlyVisible: " << onlyVisible << std::endl;
}
