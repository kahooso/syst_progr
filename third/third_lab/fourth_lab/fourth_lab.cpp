#include "MyString.h"

int main() {

	char input[256];
	
	std::cout << "input string: "; 
	std::cin.getline(input, 256);

	MyString my_string(input);

	std::cout << "\nbefore\n" << std::endl;
	my_string.print();

	my_string.update();
	
	std::cout << "\nafter\n" << std::endl;
	my_string.print();

	std::cout << "\nafter set()\n" << std::endl;
	std::cin.getline(input, 256);

	my_string.set(input);
	std::cout << std::endl;

	my_string.print();

	return 0;
}