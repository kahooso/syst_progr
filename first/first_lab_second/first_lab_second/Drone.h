#pragma once
#include "LibrariesHeader.h"

class Drone {
    std::string model;
    double flightTime;
    std::string cameraQuality;
public:
    Drone(std::string m, double f, std::string c);
    void fly();
    void land();
    void display_info();
};

