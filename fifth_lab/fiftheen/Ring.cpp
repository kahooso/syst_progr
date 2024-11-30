#include "Ring.h"

uint32_t Ring::counter = 0;

int Ring::getCount() { return counter; }

Ring::Ring(double r1, double r2) : R1(r1), R2(r2), id(++counter) {

	if (r1 <= 0 || r2 <= 0 || r2 <= r1) {

		throw std::invalid_argument("invalid argument exception.");
	}
}

Ring::Ring() : R1(1), R2(2), id(++counter) { }

Ring::Ring(const Ring& other) : R1(other.R1), R2(other.R2), id(++counter) { }

Ring& Ring::operator= (const Ring& other) {

	if (this == &other)
		return *this;

	R1 = other.R1;
	R2 = other.R2;

	return *this;
}

Ring Ring::operator* (const Ring& other) const {

	double newR1 = std::max(R1, other.R1);
	double newR2 = std::min(R2, other.R2);

	if (newR1 >= newR2) {

		throw std::logic_error("logic error exception (R1 >= R2).");
	}

	return Ring(newR1, newR2);
}

Ring Ring::operator+ (const Ring& other) const {

	double newR1 = std::min(R1, other.R1);
	double newR2 = std::max(R2, other.R2);

	return Ring(newR1, newR2);
}

Ring Ring::operator- (const Ring& other) const {

	double newR1 = R1;
	double newR2 = std::max(R2, other.R1);

	if (newR2 <= newR1) {

		throw std::logic_error("logic error exception (R1 >= R2).");
	}

	return Ring(newR1, newR2);
}

void Ring::display() const {

	if (this) {

		std::cout << "\nObject: " << this 
			<< "\nObject ID: " << id
			<< "\nInner radius: " << R1
			<< "\nOuter radius: " << R2
			<< std::endl;
		std::cout << "Counter: " << getCount() << std::endl;
	}
	else return;
}

Ring::~Ring() { --counter; }