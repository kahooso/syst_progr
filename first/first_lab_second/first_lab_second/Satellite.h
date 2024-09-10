#pragma once
#include "LibrariesHeader.h"

class Satellite {
    std::string name;
    std::string purpose;
    std::string orbitType;
public:
    Satellite(std::string n, std::string p, std::string o);
    void transmit_data();
    void change_orbit();
    void display_info();
};
