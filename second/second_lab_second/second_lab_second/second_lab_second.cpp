#include <iostream>
#include "AllUsingLibraries.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	Rectangle* empty_rectangle = new Rectangle();
	int width = -1, height = -1;
	
	std::cout << empty_rectangle->rect_to_string() << std::endl;

	while (width < 0 || height < 0) {
		try
		{
			std::cout << "ширина >>\t";
			std::cin >> width;

			std::cout << "высота >>\t";
			std::cin >> height;
		}
		catch (const std::exception&)
		{
			std::cout << "Некорректный ввод" << std::endl;
		}
	}

	if (!empty_rectangle->set_height(height) || !empty_rectangle->set_width(width))
		std::cout << "Некорректный ввод" << std::endl;

	std::cout << empty_rectangle->rect_to_string() << std::endl;

	return 0;
}
