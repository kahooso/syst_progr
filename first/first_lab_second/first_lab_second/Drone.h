#pragma once
#include "Header.h"

// ����� ��� �������� �����
class Drone {
public:
    std::string model;        // ������ �����
    double flightTime;        // ����� ������ (����)
    std::string cameraQuality; // �������� ������

    // ����������� � �����������
    Drone(std::string m, double f, std::string c) : model(m), flightTime(f), cameraQuality(c) {}

    // ����� ������
    void fly() {
        std::cout << "Drone " << model << " is flying!" << std::endl;
    }

    // ����� �������
    void land() {
        std::cout << "Drone " << model << " is landing!" << std::endl;
    }

    // ����� ����������� ���������� � �����
    void displayInfo() {
        std::cout << "Model: " << model
            << ", Flight time: " << flightTime << " hours"
            << ", Camera quality: " << cameraQuality << std::endl;
    }
};

