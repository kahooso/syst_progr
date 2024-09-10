#pragma once
#include <cmath> 
#include <string>

class Rectangle
{
private:
    double width;
    double height;
public:
    Rectangle();
    Rectangle(double width, double height);
    double perimeter() const;
    double area() const;
    double horizon() const;
    void resize(double width_percent, double height_percent);
    std::string info() const;
};