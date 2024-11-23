#include "Ring.h"

int main() {

	try
	{
		Ring first_ring(2, 5);
		Ring second_ring(3, 6);

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