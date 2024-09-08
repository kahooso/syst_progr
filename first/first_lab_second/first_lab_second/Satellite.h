#pragma once
#include "Header.h"

// Класс для описания спутника
class Satellite {
public:
    std::string name;       // Название спутника
    std::string purpose;    // Назначение спутника
    std::string orbitType;  // Тип орбиты

    // Конструктор с параметрами
    Satellite(std::string n, std::string p, std::string o) : name(n), purpose(p), orbitType(o) {}

    // Метод передачи данных
    void transmitData() {
        std::cout << "Satellite " << name << " is transmitting data!" << std::endl;
    }

    // Метод изменения орбиты
    void changeOrbit() {
        std::cout << "Satellite " << name << " is changing orbit!" << std::endl;
    }

    // Метод отображения информации о спутнике
    void displayInfo() {
        std::cout << "Name: " << name
            << ", Purpose: " << purpose
            << ", Orbit type: " << orbitType << std::endl;
    }
};
