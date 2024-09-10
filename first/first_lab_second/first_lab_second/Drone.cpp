#include "Drone.h"

// ����������� � �����������
Drone::Drone(std::string m, double f, std::string c) : model(m), flightTime(f), cameraQuality(c) {}

// ����� ������
void Drone::fly() {
    std::cout << "Drone " << model << " is flying!" << std::endl;
}

// ����� �������
void Drone::land() {
    std::cout << "Drone " << model << " is landing!" << std::endl;
}

// ����� ����������� ���������� � �����
void Drone::display_info() {
    std::cout << "Model: " << model
        << ", Flight time: " << flightTime << " hours"
        << ", Camera quality: " << cameraQuality << std::endl;
}