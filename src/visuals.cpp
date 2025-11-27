#include "visuals.h"

void Visuals::run() {
    // Mock visuals
    std::cout << "[Visuals] Drawing ESP (mock)" << std::endl;
}

void Visuals::printConfig() {
    std::cout << "Visuals: Box(" << box << ") Health(" << healthBar
              << ") Name(" << nickname << ") Skeleton(" << skeleton
              << ") Loot(" << lootESP << ") Drone(" << droneESP
              << ") VisibleCheck(" << visibleCheck << ")" << std::endl;
}
