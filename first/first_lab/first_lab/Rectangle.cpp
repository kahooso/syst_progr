#pragma once
#include "Rectangle.h"

Rectangle::Rectangle() : width(0), height(0) { }

// ����������� � �����������
Rectangle::Rectangle(double width, double height) : width(width), height(height) { }

// ����� ��� ���������� ���������
double Rectangle::perimeter() const {
    return 2 * (width + height);
}

// ����� ��� ���������� �������
double Rectangle::area() const {
    return width * height;
}

// ����� ��� ���������� ����� ����������
double Rectangle::horizon() const {
    return std::sqrt(width * width + height * height);
}

// ����� ��� ��������� �������� ��������������
void Rectangle::resize(double width_percent, double height_percent) {
    double temp_width = this->width, temp_height = this->height;

    width += width * (width_percent / 100);   // ���������� ������ �� �������� �������
    height += height * (height_percent / 100); // ���������� ������ �� �������� �������

    // �������� �� ������������� �������� � ��������� � ����, ���� ��� ����������
    if (this->width <= 0) { width = temp_width; }
    if (this->height <= 0) { height = temp_height; }
}

// ����� ��� ��������� ������ � ����������� � ��������������
std::string Rectangle::info() const {
    return "width -> " + std::to_string(width) +
        " \nheight -> " + std::to_string(height) +
        "\narea -> " + std::to_string(area()) +
        " \nhorizon -> " + std::to_string(horizon()) +
        "\nperimeter -> " + std::to_string(perimeter()) + "\n---";
}