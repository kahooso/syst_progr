#include "main_header.h"

int main()
{
    int index = 1;  // Индекс выбранного прямоугольника

    while (index != -1) {  // Цикл выполнения программы до выхода
        int array_length = 0, height = 0, width = 0;
        std::vector<Rectangle> rectangle_vector;  // Вектор для хранения прямоугольников
        
        // Запрос длины массива и проверка корректности ввода
        while (true) {
            std::cout << "input array length -> ";
            std::cin >> array_length;

            // Проверка на корректность ввода (положительное целое число)
            if (std::cin.fail() || array_length <= 0) {
                std::cin.clear();  // Очистка флага ошибки
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Очистка входного потока
                std::cout << "you must input positive integer value!" << std::endl;
            }
            else
                break;  // Ввод корректен, выходим из цикла
        }

        // Запрос ширины и высоты для каждого прямоугольника
        for (size_t i = 0; i < array_length; ++i) {
            std::cout << "width >> height -> ";
            std::cin >> width >> height;

            // Проверка на корректность ввода (положительные значения)
            if (std::cin.fail() || width <= 0 || height <= 0) {
                std::cin.clear();  // Очистка флага ошибки
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Очистка входного потока
                std::cout << "you must input positive double values!" << std::endl;
                --i;  // Повторный запрос ввода для текущего прямоугольника
            }
            else {
                rectangle_vector.push_back(Rectangle(width, height));  // Добавление нового прямоугольника в вектор
            }
        }

        // Цикл для редактирования размеров прямоугольников
        while (true) {
            system("cls");  // Очистка экрана 

            std::cout << "choose a rectangle you want to reduce/increase (exit -> -1)" << std::endl;
            std::cout << "the value of the height or the weight won't be changed if your reduce operation would set incorrect value!" << std::endl;
            std::cout << std::endl;

            displayAll(rectangle_vector);  // Отображение всех прямоугольников

            std::cout << "\nid -> "; std::cin >> index;  // Выбор прямоугольника по индексу

            if (index == -1)
                break;  // Выход из цикла редактирования

            double width_percent, height_percent;
            std::cout << "width percent >> height percent -> ";
            std::cin >> width_percent >> height_percent;

            // Изменение размеров выбранного прямоугольника
            if (index >= 0 && index < rectangle_vector.size()) {
                rectangle_vector.at(index).resize(width_percent, height_percent);
            }
            else {
                std::cout << "Invalid index!" << std::endl;
            }

            displayAll(rectangle_vector);  // Отображение всех прямоугольников после изменения
        }
    }

    return 0;
}
