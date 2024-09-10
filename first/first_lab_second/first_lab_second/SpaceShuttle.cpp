#include "SpaceShuttle.h"

// Класс для описания космического шаттла
SpaceShuttle::SpaceShuttle(std::string n, int c, double o) : name(n), crewCapacity(c), orbitHeight(o) {}

// Метод запуска шаттла
void SpaceShuttle::launch() {
    std::cout << "Cosmic shuttle " << name << " is starting!" << std::endl;
}

// Метод стыковки шаттла
void SpaceShuttle::dock() {
    std::cout << "Cosmic shuttle " << name << " is docking!" << std::endl;
}

// Метод отображения информации о шаттле
void SpaceShuttle::display_info() {
    std::cout << "Name: " << name
        << ", Crew capacity: " << crewCapacity
        << ", Orbit height: " << orbitHeight << " km" << std::endl;
}