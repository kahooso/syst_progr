#include "Republic.h"

Republic::Republic(const std::string& name) : State(name) {}

void Republic::show() const {

	std::cout << "Republic: " << this->name << std::endl;
}