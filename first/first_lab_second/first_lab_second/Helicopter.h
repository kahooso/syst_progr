#pragma once
#include "Header.h"

// ����� ��� �������� ���������
class Helicopter {
public:
    std::string model;    // ������ ���������
    double range;         // ��������� ������ (��)
    int bladesCount;      // ���������� ��������

    // ����������� � �����������
    Helicopter(std::string m, double r, int b) : model(m), range(r), bladesCount(b) {}

    // ����� ��������� (�����������)
    void hover() {
        std::cout << "Helicopter " << model << " is holding into the wind!" << std::endl;
    }

    // ����� �������
    void land() {
        std::cout << "Helicopter " << model << " is landing." << std::endl;
    }

    // ����� ����������� ���������� � ���������
    void displayInfo() {
        std::cout << "Model: " << model
            << ", Flight range: " << range << " km"
            << ", Blades count: " << bladesCount << std::endl;
    }
};

