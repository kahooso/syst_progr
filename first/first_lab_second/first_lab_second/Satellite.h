#pragma once
#include "Header.h"

// ����� ��� �������� ��������
class Satellite {
public:
    std::string name;       // �������� ��������
    std::string purpose;    // ���������� ��������
    std::string orbitType;  // ��� ������

    // ����������� � �����������
    Satellite(std::string n, std::string p, std::string o) : name(n), purpose(p), orbitType(o) {}

    // ����� �������� ������
    void transmitData() {
        std::cout << "Satellite " << name << " is transmitting data!" << std::endl;
    }

    // ����� ��������� ������
    void changeOrbit() {
        std::cout << "Satellite " << name << " is changing orbit!" << std::endl;
    }

    // ����� ����������� ���������� � ��������
    void displayInfo() {
        std::cout << "Name: " << name
            << ", Purpose: " << purpose
            << ", Orbit type: " << orbitType << std::endl;
    }
};
