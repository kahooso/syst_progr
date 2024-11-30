#include "Ring.h"

int main() {

	try
	{
		double r1 = 0, r2 = 1;

		std::cout << "first ring" << std::endl;
		std::cin >> r1;
		std::cin >> r2;
		Ring first_ring(r1, r2);
		std::cout << "counter -> " << Ring::getCounter() << std::endl;

		std::cout << "second ring" << std::endl;
		std::cin >> r1;
		std::cin >> r2;
		Ring second_ring(r1, r2);
		std::cout << "counter -> " << Ring::getCounter() << std::endl;

		std::cout << "\nInitial rings: " << std::endl;

		first_ring.display();
		second_ring.display();

		Ring inseraction = first_ring * second_ring;
		std::cout << "\ninseraction (*)" << std::endl;
		inseraction.display();

		Ring unionn = first_ring + second_ring;
		std::cout << "\nunion (+)" << std::endl;
		unionn.display();

		Ring diffrence = first_ring - second_ring;
		std::cout << "\ndiffrence (-)" << std::endl;
		diffrence.display();

	}
	catch (const std::exception& e)
	{

		std::cerr << "error: " << e.what() << std::endl;
	}

	return 0;
}