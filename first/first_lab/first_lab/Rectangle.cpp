#pragma once
#include "Rectangle.h"

Rectangle::Rectangle() : width(0), height(0) { }

// Конструктор с параметрами
Rectangle::Rectangle(double width, double height) : width(width), height(height) { }

// Метод для вычисления периметра
double Rectangle::perimeter() const {
    return 2 * (width + height);
}

// Метод для вычисления площади
double Rectangle::area() const {
    return width * height;
}

// Метод для вычисления длины гипотенузы
double Rectangle::horizon() const {
    return std::sqrt(width * width + height * height);
}

// Метод для изменения размеров прямоугольника
void Rectangle::resize(double width_percent, double height_percent) {
    double temp_width = this->width, temp_height = this->height;

    width += width * (width_percent / 100);   // Увеличение ширины на заданный процент
    height += height * (height_percent / 100); // Увеличение высоты на заданный процент

    // Проверка на отрицательные значения и установка в ноль, если это необходимо
    if (this->width <= 0) { width = temp_width; }
    if (this->height <= 0) { height = temp_height; }
}

// Метод для получения строки с информацией о прямоугольнике
std::string Rectangle::info() const {
    return "width -> " + std::to_string(width) +
        " \nheight -> " + std::to_string(height) +
        "\narea -> " + std::to_string(area()) +
        " \nhorizon -> " + std::to_string(horizon()) +
        "\nperimeter -> " + std::to_string(perimeter()) + "\n---";
}