#pragma once
#include "AllUsingLibraries.h"

class Rectangle
{
private:
	double width; 
	double height; 
public:
	Rectangle();
	Rectangle(double width, double height);
	double get_width() const;
	double get_height() const;
	bool set_height(const double& height);
	bool set_width(const double& width);
	std::string rect_to_string() const;
};

