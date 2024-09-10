#include "Satellite.h"

// Конструктор с параметрами
Satellite::Satellite(std::string n, std::string p, std::string o) : name(n), purpose(p), orbitType(o) {}

// Метод передачи данных
void Satellite::transmit_data() {
    std::cout << "Satellite " << name << " is transmitting data!" << std::endl;
}

// Метод изменения орбиты
void Satellite::change_orbit() {
    std::cout << "Satellite " << name << " is changing orbit!" << std::endl;
}

// Метод отображения информации о спутнике
void Satellite::display_info() {
    std::cout << "Name: " << name
        << ", Purpose: " << purpose
        << ", Orbit type: " << orbitType << std::endl;
}
