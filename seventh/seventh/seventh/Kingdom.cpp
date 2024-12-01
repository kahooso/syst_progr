#include "Kingdom.h"

Kingdom::Kingdom(const std::string& name) : State(name) { }

void Kingdom::show() const {

	std::cout << "Kingdom: " << this->name << std::endl;
}