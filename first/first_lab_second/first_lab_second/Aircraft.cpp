#include "Aircraft.h"

Aircraft::Aircraft(std::string m, int c, double s) : model(m), capacity(c), maxSpeed(s) {}

// ����� ������
void Aircraft::take_off() {
    std::cout << "Plane " << model << " is taking off!" << std::endl;
}

// ����� �������
void Aircraft::land() {
    std::cout << "Plane " << model << " is landing." << std::endl;
}

// ����� ����������� ���������� � ��������
void Aircraft::display_info() {
    std::cout << "Model: " << model
        << ", Capacity: " << capacity
        << ", Max speed: " << maxSpeed << " km/h" << std::endl;
}
