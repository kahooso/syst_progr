#pragma once
#include "Header.h"

// Класс для описания воздушного судна (самолет)
class Aircraft {
public:
    std::string model;    // Модель самолета
    int capacity;         // Вместимость (количество пассажиров)
    double maxSpeed;      // Максимальная скорость (км/ч)

    // Конструктор с параметрами
    Aircraft(std::string m, int c, double s) : model(m), capacity(c), maxSpeed(s) {}

    // Метод взлета
    void takeOff() {
        std::cout << "Plane " << model << " is taking off!" << std::endl;
    }

    // Метод посадки
    void land() {
        std::cout << "Plane " << model << " is landing." << std::endl;
    }

    // Метод отображения информации о самолете
    void displayInfo() {
        std::cout << "Model: " << model
            << ", Capacity: " << capacity
            << ", Max speed: " << maxSpeed << " km/h" << std::endl;
    }
};