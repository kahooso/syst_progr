#pragma once
#include <iostream>
#include <vector>
#include <stdexcept>
#include <limits>
#include "Rectangle.h"

// ������� ��� ����������� ���� ��������������� � �������
void displayAll(const std::vector<Rectangle>& vector) {
    unsigned int counter = 0;  // ������� ��� ������������� ���������������
    for (const auto& it : vector) {
        std::cout << "id -> " << counter << "\n" << it.info() << std::endl;  // ����� ���������� � ��������������
        ++counter;  // ���������� ��������
    }
}
