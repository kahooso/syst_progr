#pragma once
#include <iostream>
#include <vector>
#include <stdexcept>
#include <limits>
#include "Rectangle.h"

// Функция для отображения всех прямоугольников в векторе
void displayAll(const std::vector<Rectangle>& vector) {
    unsigned int counter = 0;  // Счётчик для идентификации прямоугольников
    for (const auto& it : vector) {
        std::cout << "id -> " << counter << "\n" << it.info() << std::endl;  // Вывод информации о прямоугольнике
        ++counter;  // Увеличение счётчика
    }
}
