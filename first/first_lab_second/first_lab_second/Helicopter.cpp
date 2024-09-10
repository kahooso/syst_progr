#include "Helicopter.h"

// ����������� � �����������
Helicopter::Helicopter(std::string m, double r, int b) : model(m), range(r), bladesCount(b) {}

// ����� ��������� (�����������)
void Helicopter::hover() {
    std::cout << "Helicopter " << model << " is holding into the wind!" << std::endl;
}

// ����� �������
void Helicopter::land() {
    std::cout << "Helicopter " << model << " is landing." << std::endl;
}

void Helicopter::display_info() {
    std::cout << "Model: " << model
        << ", Flight range: " << range << " km"
        << ", Blades count: " << bladesCount << std::endl;
}
