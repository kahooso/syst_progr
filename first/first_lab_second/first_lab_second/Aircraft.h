#pragma once
#include "LibrariesHeader.h"

class Aircraft {
    std::string model;
    int capacity;
    double maxSpeed;
public:
    Aircraft(std::string m, int c, double s);
    void take_off();
    void land();
    void display_info();
};