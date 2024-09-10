#pragma once
#include "AllUsingLibraries.h"

class Worker {
    int mood;
    float weight;
public:
    int age;
    std::string name;
public:
    Worker();
    std::string worker_to_string();
    int get_mood() const;
    float get_weight() const;
    void set_weight(const float& weight_value) noexcept;
    void eat(const float& how_much);
    void walk();
    void dance();
    void work();
};
