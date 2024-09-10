#include "SpaceShuttle.h"

// ����� ��� �������� ������������ ������
SpaceShuttle::SpaceShuttle(std::string n, int c, double o) : name(n), crewCapacity(c), orbitHeight(o) {}

// ����� ������� ������
void SpaceShuttle::launch() {
    std::cout << "Cosmic shuttle " << name << " is starting!" << std::endl;
}

// ����� �������� ������
void SpaceShuttle::dock() {
    std::cout << "Cosmic shuttle " << name << " is docking!" << std::endl;
}

// ����� ����������� ���������� � ������
void SpaceShuttle::display_info() {
    std::cout << "Name: " << name
        << ", Crew capacity: " << crewCapacity
        << ", Orbit height: " << orbitHeight << " km" << std::endl;
}