#include "Solution.h"

int main() {

    Solution obj1(1); // basic
    const Solution obj2(2); // const

    std::cout << "Counter after initialize both objects: " << Solution::getCounter() << std::endl;

    std::cout << "obj1 ID: " << obj1.getId() << std::endl;
    obj1.printId();

    std::cout << "obj2 ID: " << obj2.getId() << std::endl;
    obj2.printId();

    std::cout << "Counter: " << Solution::getCounter() << std::endl;

	return 0;
}