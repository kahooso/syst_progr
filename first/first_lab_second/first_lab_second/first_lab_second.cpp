#include "LibrariesHeader.h"

int main() {
    // Вектор объектов класса Aircraft
    std::vector<Aircraft> aircrafts = {
        {"Boeing 737", 180, 850},
        {"Airbus A320", 160, 830},
        {"Cessna 172", 4, 226},
        {"Concorde", 120, 2179},
        {"Embraer E190", 110, 871},
        {"Lockheed SR-71", 2, 3540},
        {"Antonov An-225", 6, 850}
    };

    // Вектор объектов класса Helicopter
    std::vector<Helicopter> helicopters = {
        {"Mi-8", 500, 5},
        {"Apache AH-64", 480, 4},
        {"Robinson R44", 560, 2},
        {"Bell 206", 690, 2},
        {"Eurocopter AS350", 650, 3},
        {"Black Hawk", 590, 4},
        {"Chinook", 741, 6}
    };

    // Вектор объектов класса SpaceShuttle
    std::vector<SpaceShuttle> shuttles = {
        {"Atlantis", 7, 300},
        {"Challenger", 7, 300},
        {"Discovery", 7, 300},
        {"Endeavour", 7, 300},
        {"Columbia", 7, 300},
        {"Buran", 10, 300},
        {"X-37B", 5, 400}
    };

    // Вектор объектов класса Satellite
    std::vector<Satellite> satellites = {
        {"Hubble", "Observational", "Low Earth Orbit"},
        {"GPS IIR-1", "Navigation", "Medium Earth Orbit"},
        {"GOES-16", "Weather", "Geostationary Orbit"},
        {"Galileo", "Navigation", "Medium Earth Orbit"},
        {"TESS", "Exoplanet Hunting", "High Earth Orbit"},
        {"Landsat 8", "Earth Observation", "Sun-synchronous orbit"},
        {"James Webb", "Space Observatory", "Lagrange Point"}
    };

    // Вектор объектов класса Drone
    std::vector<Drone> drones = {
        {"DJI Phantom", 1.5, "4K"},
        {"Parrot Anafi", 2.5, "4K"},
        {"Mavic Air", 3, "4K"},
        {"Inspire 2", 2, "5.2K"},
        {"Skydio 2", 1, "4K"},
        {"Yuneec Typhoon", 1.8, "4K"},
        {"Holy Stone HS720", 2, "2K"}
    };

    // Вывод информации и вызов методов для каждого объекта Aircraft
    for (auto& aircraft : aircrafts) {
        aircraft.display_info();
        aircraft.take_off();
        aircraft.land();
        std::cout << std::endl;
    }

    // Вывод информации и вызов методов для каждого объекта Helicopter  
    for (auto& helicopter : helicopters) {
        helicopter.display_info();
        helicopter.hover();
        helicopter.land();
        std::cout << std::endl;
    }

    // Вывод информации и вызов методов для каждого объекта SpaceShuttle
    for (auto& shuttle : shuttles) {
        shuttle.display_info();
        shuttle.launch();
        shuttle.dock();
        std::cout << std::endl;
    }

    // Вывод информации и вызов методов для каждого объекта Satellite
    for (auto& satellite : satellites) {
        satellite.display_info();
        satellite.transmit_data();
        satellite.change_orbit();
        std::cout << std::endl;
    }

    // Вывод информации и вызов методов для каждого объекта Drone
    for (auto& drone : drones) {
        drone.display_info();
        drone.fly();
        drone.land();
        std::cout << std::endl;
    }

    return 0;
}