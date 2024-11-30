#include "Ring.h"

int main() {
    try {
        const Ring const_ring(3, 5);
        const_ring.display();

        static Ring stat_ring(1, 2); 

        Ring ring1(2, 4);
        Ring ring2(3, 5);

        ring1.display();
        ring2.display();

        Ring result = ring1 + ring2;
        result.display();

        std::cout << "Counter after all obj deleted: " << Ring::getCount() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}