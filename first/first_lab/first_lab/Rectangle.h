#pragma once
#include <cmath>  // Используйте <cmath> вместо <math.h> для C++
#include <string>

class Rectangle
{
private:
    double width;  // Ширина прямоугольника
    double height; // Высота прямоугольника

public:
    // Конструктор по умолчанию
    Rectangle() : width(0), height(0) { }

    // Конструктор с параметрами
    Rectangle(double width, double height) : width(width), height(height) { }

    // Метод для вычисления периметра
    double perimeter() const {
        return 2 * (width + height);
    }

    // Метод для вычисления площади
    double area() const {
        return width * height;
    }

    // Метод для вычисления длины гипотенузы
    double horizon() const {
        return std::sqrt(width * width + height * height); 
    }

    // Метод для изменения размеров прямоугольника
    void resize(double width_percent, double height_percent) {
        width += width * (width_percent / 100);   // Увеличение ширины на заданный процент
        height += height * (height_percent / 100); // Увеличение высоты на заданный процент

        // Проверка на отрицательные значения и установка в ноль, если это необходимо
        if (this->width < 0 || this->height) { height = 0; width = 0; }
        
    }

    // Метод для получения строки с информацией о прямоугольнике
    std::string info() const {
        return "width -> " + std::to_string(width) +
            " \nheight -> " + std::to_string(height) +
            "\narea -> " + std::to_string(area()) +
            " \nhorizon -> " + std::to_string(horizon()) +
            "\nperimeter -> " + std::to_string(perimeter()) + "\n---";
    }
};
