#include "Drone.h"

// Конструктор с параметрами
Drone::Drone(std::string m, double f, std::string c) : model(m), flightTime(f), cameraQuality(c) {}

// Метод полета
void Drone::fly() {
    std::cout << "Drone " << model << " is flying!" << std::endl;
}

// Метод посадки
void Drone::land() {
    std::cout << "Drone " << model << " is landing!" << std::endl;
}

// Метод отображения информации о дроне
void Drone::display_info() {
    std::cout << "Model: " << model
        << ", Flight time: " << flightTime << " hours"
        << ", Camera quality: " << cameraQuality << std::endl;
}