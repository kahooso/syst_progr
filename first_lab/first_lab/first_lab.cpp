#include <iostream>
#include <math.h>
#include <vector>
#include "Rectangle.h"

int main()
{
	int array_length = 0;

	while (array_length <= 0) {
		try
		{
			std::cout << "array length -> "; std::cin >> array_length;
		}
		catch (const std::exception&)
		{
			std::cout << "please try again!" << std::endl;
		}
	}

	std::vector<Rectangle> rectangle_vector;
	int bigger_side, less_side;
	int counter = 0;

	while (counter < array_length) {
		try
		{
			std::cout << "input bigger side first, less side second -> "; std::cin >> bigger_side >> less_side;
			if (!std::cin.good())
				throw std::invalid_argument("something went wrong!");
			rectangle_vector.push_back(Rectangle(bigger_side, less_side));
			++counter;
			std::cout << std::endl;
		}
		catch (const std::exception&)
		{
			--counter;
		}
	}

	for (auto it : rectangle_vector) 
	{
		std::cout << it.display() << std::endl;
	}

	return 0;
}
