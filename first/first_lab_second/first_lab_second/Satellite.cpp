#include "Satellite.h"

// ����������� � �����������
Satellite::Satellite(std::string n, std::string p, std::string o) : name(n), purpose(p), orbitType(o) {}

// ����� �������� ������
void Satellite::transmit_data() {
    std::cout << "Satellite " << name << " is transmitting data!" << std::endl;
}

// ����� ��������� ������
void Satellite::change_orbit() {
    std::cout << "Satellite " << name << " is changing orbit!" << std::endl;
}

// ����� ����������� ���������� � ��������
void Satellite::display_info() {
    std::cout << "Name: " << name
        << ", Purpose: " << purpose
        << ", Orbit type: " << orbitType << std::endl;
}
