#pragma once
#include "Header.h"

// Класс для описания дрона
class Drone {
public:
    std::string model;        // Модель дрона
    double flightTime;        // Время полета (часы)
    std::string cameraQuality; // Качество камеры

    // Конструктор с параметрами
    Drone(std::string m, double f, std::string c) : model(m), flightTime(f), cameraQuality(c) {}

    // Метод полета
    void fly() {
        std::cout << "Drone " << model << " is flying!" << std::endl;
    }

    // Метод посадки
    void land() {
        std::cout << "Drone " << model << " is landing!" << std::endl;
    }

    // Метод отображения информации о дроне
    void displayInfo() {
        std::cout << "Model: " << model
            << ", Flight time: " << flightTime << " hours"
            << ", Camera quality: " << cameraQuality << std::endl;
    }
};

