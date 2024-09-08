#pragma once
#include "Header.h"

// Класс для описания космического шаттла
class SpaceShuttle {
public:
    std::string name;        // Название шаттла
    int crewCapacity;        // Вместимость экипажа
    double orbitHeight;      // Высота орбиты (км)

    // Конструктор с параметрами
    SpaceShuttle(std::string n, int c, double o) : name(n), crewCapacity(c), orbitHeight(o) {}

    // Метод запуска шаттла
    void launch() {
        std::cout << "Cosmic shuttle " << name << " is starting!" << std::endl;
    }

    // Метод стыковки шаттла
    void dock() {
        std::cout << "Cosmic shuttle " << name << " is docking!" << std::endl;
    }

    // Метод отображения информации о шаттле
    void displayInfo() {
        std::cout << "Name: " << name
            << ", Crew capacity: " << crewCapacity
            << ", Orbit height: " << orbitHeight << " km" << std::endl;
    }
};
