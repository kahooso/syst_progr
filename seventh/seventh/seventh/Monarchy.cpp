#include "Monarchy.h"

Monarchy::Monarchy(const std::string& name) : State(name) {}

void Monarchy::show() const {

	std::cout << "Monarchy: " << this->name << std::endl;
}