#pragma once
#include <cmath>  // ����������� <cmath> ������ <math.h> ��� C++
#include <string>

class Rectangle
{
private:
    double width;  // ������ ��������������
    double height; // ������ ��������������

public:
    // ����������� �� ���������
    Rectangle() : width(0), height(0) { }

    // ����������� � �����������
    Rectangle(double width, double height) : width(width), height(height) { }

    // ����� ��� ���������� ���������
    double perimeter() const {
        return 2 * (width + height);
    }

    // ����� ��� ���������� �������
    double area() const {
        return width * height;
    }

    // ����� ��� ���������� ����� ����������
    double horizon() const {
        return std::sqrt(width * width + height * height); 
    }

    // ����� ��� ��������� �������� ��������������
    void resize(double width_percent, double height_percent) {
        width += width * (width_percent / 100);   // ���������� ������ �� �������� �������
        height += height * (height_percent / 100); // ���������� ������ �� �������� �������

        // �������� �� ������������� �������� � ��������� � ����, ���� ��� ����������
        if (this->width < 0 || this->height) { height = 0; width = 0; }
        
    }

    // ����� ��� ��������� ������ � ����������� � ��������������
    std::string info() const {
        return "width -> " + std::to_string(width) +
            " \nheight -> " + std::to_string(height) +
            "\narea -> " + std::to_string(area()) +
            " \nhorizon -> " + std::to_string(horizon()) +
            "\nperimeter -> " + std::to_string(perimeter()) + "\n---";
    }
};
