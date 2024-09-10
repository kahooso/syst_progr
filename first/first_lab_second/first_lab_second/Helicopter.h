#pragma once
#include "LibrariesHeader.h"

class Helicopter {
    std::string model;
    double range;
    int bladesCount;
public:
    Helicopter(std::string m, double r, int b);
    void hover();
    void land();
    void display_info();
};