#pragma once
#include <math.h>
#include <string>
#include <stdexcept>

class Rectangle
{
private:
	long double bigger_side;
	long double less_side;
public:
	Rectangle()
	{
		this->bigger_side = 0;
		this->less_side = 0;
	}
	Rectangle(long double bigger_side, long double less_side)
	{
		if (bigger_side < 0 && less_side < 0 && bigger_side > less_side) {
			throw std::invalid_argument("something went wrong!");
		}
		this->bigger_side = bigger_side;
		this->less_side = less_side;
	}
	static long double getPerimeter(long double bigger_side, long double less_side)
	{
		return 2 * (bigger_side + less_side);
	}
	static long double getArea(long double bigger_side, long double less_side) {
		return bigger_side * less_side;
	}
	static long double getHorizon(long double bigger_side, long double less_side) {
		return sqrt(pow(bigger_side, 2) + pow(less_side, 2));
	}
	std::string display() const {
		auto bigger_side = this->bigger_side;
		auto less_side = this->less_side;

		auto area = getArea(bigger_side, less_side);
		auto horizon = getHorizon(bigger_side, less_side),
			perimeter = getPerimeter(bigger_side, less_side);

		return "bigger side -> " + std::to_string(bigger_side)
			+ " \tless side -> " + std::to_string(less_side)
			+ "\tarea -> " + std::to_string(area)
			+ " \thorizon -> " + std::to_string(horizon)
			+ "\tperimeter -> " + std::to_string(perimeter);
	}
};

