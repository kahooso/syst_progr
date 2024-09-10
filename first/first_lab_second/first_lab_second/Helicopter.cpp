#include "Helicopter.h"

// Конструктор с параметрами
Helicopter::Helicopter(std::string m, double r, int b) : model(m), range(r), bladesCount(b) {}

// Метод зависания (дребезжание)
void Helicopter::hover() {
    std::cout << "Helicopter " << model << " is holding into the wind!" << std::endl;
}

// Метод посадки
void Helicopter::land() {
    std::cout << "Helicopter " << model << " is landing." << std::endl;
}

void Helicopter::display_info() {
    std::cout << "Model: " << model
        << ", Flight range: " << range << " km"
        << ", Blades count: " << bladesCount << std::endl;
}
