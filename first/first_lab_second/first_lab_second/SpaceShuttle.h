#pragma once
#include "Header.h"

// ����� ��� �������� ������������ ������
class SpaceShuttle {
public:
    std::string name;        // �������� ������
    int crewCapacity;        // ����������� �������
    double orbitHeight;      // ������ ������ (��)

    // ����������� � �����������
    SpaceShuttle(std::string n, int c, double o) : name(n), crewCapacity(c), orbitHeight(o) {}

    // ����� ������� ������
    void launch() {
        std::cout << "Cosmic shuttle " << name << " is starting!" << std::endl;
    }

    // ����� �������� ������
    void dock() {
        std::cout << "Cosmic shuttle " << name << " is docking!" << std::endl;
    }

    // ����� ����������� ���������� � ������
    void displayInfo() {
        std::cout << "Name: " << name
            << ", Crew capacity: " << crewCapacity
            << ", Orbit height: " << orbitHeight << " km" << std::endl;
    }
};
