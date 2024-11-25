#include "Solution.h"

uint32_t Solution::counter = 0;

uint32_t Solution::getCounter() { return counter; }

Solution::Solution(uint32_t id) : id(id) { ++counter; }

Solution::~Solution() { --counter; }

uint32_t Solution::getId() const { return this->id; } // const 

void Solution::printId() const {

    std::cout << "Object " << this << "\tID: " << this->id << std::endl;
}