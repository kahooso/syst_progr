#pragma once
#include "LibrariesHeader.h"

class SpaceShuttle {
    std::string name;
    int crewCapacity;
    double orbitHeight;
public:     
    SpaceShuttle(std::string n, int c, double o);
    void launch();
    void dock();
    void display_info();
};
