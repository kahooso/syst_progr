#pragma once
#include "Header.h"

// Класс для описания вертолета
class Helicopter {
public:
    std::string model;    // Модель вертолета
    double range;         // Дальность полета (км)
    int bladesCount;      // Количество лопастей

    // Конструктор с параметрами
    Helicopter(std::string m, double r, int b) : model(m), range(r), bladesCount(b) {}

    // Метод зависания (дребезжание)
    void hover() {
        std::cout << "Helicopter " << model << " is holding into the wind!" << std::endl;
    }

    // Метод посадки
    void land() {
        std::cout << "Helicopter " << model << " is landing." << std::endl;
    }

    // Метод отображения информации о вертолете
    void displayInfo() {
        std::cout << "Model: " << model
            << ", Flight range: " << range << " km"
            << ", Blades count: " << bladesCount << std::endl;
    }
};

