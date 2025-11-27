#include "radar.h"

void Radar::run() {
    if (!enabled) return;
    std::cout << "[Radar] Updating radar (mock)" << std::endl;
}

void Radar::printConfig() {
    std::cout << "Radar Enabled: " << enabled << std::endl;
}
