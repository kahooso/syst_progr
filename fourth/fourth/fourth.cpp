#include "Ring.h"

int main() {

	try
	{
		double r1 = 0, r2 = 1;

		std::cout << "first ring" << std::endl;
		std::cin >> r1;
		std::cin >> r2;

		Ring first_ring(r1, r2);
		
		std::cout << "second ring" << std::endl;
		std::cin >> r1;
		std::cin >> r2;

		Ring second_ring(r1, r2);

		std::cout << "Initial rings: " << std::endl;

		first_ring.display();
		second_ring.display();

		std::cout << std::endl;

		Ring inseraction = first_ring * second_ring;
		std::cout << "inseraction (*)" << std::endl;
		inseraction.display();

		Ring unionn = first_ring + second_ring;
		std::cout << "union (+)" << std::endl;
		unionn.display();

		Ring diffrence = first_ring - second_ring;
		std::cout << "diffrence (-)" << std::endl;
		diffrence.display();

	}
	catch (const std::exception& e)
	{

		std::cerr << "error: " << e.what() << std::endl;
	}

	return 0;
}