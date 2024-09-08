#pragma once
#include "Header.h"

// ����� ��� �������� ���������� ����� (�������)
class Aircraft {
public:
    std::string model;    // ������ ��������
    int capacity;         // ����������� (���������� ����������)
    double maxSpeed;      // ������������ �������� (��/�)

    // ����������� � �����������
    Aircraft(std::string m, int c, double s) : model(m), capacity(c), maxSpeed(s) {}

    // ����� ������
    void takeOff() {
        std::cout << "Plane " << model << " is taking off!" << std::endl;
    }

    // ����� �������
    void land() {
        std::cout << "Plane " << model << " is landing." << std::endl;
    }

    // ����� ����������� ���������� � ��������
    void displayInfo() {
        std::cout << "Model: " << model
            << ", Capacity: " << capacity
            << ", Max speed: " << maxSpeed << " km/h" << std::endl;
    }
};