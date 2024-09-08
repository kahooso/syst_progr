#pragma once
#include <string>
#include <iostream>

class Worker {
    int mood;
    float weight;
public:
    int age;
    std::string name;

    Worker() {
        this->name = "no name";
        this->age = 0;
        this->weight = 0.0f;
        this->mood = 10;
    }

    std::string worker_to_string() {
        return "Name -> " + this->name
            + "\nAge -> " + std::to_string(this->age) +
            + "\nWeight -> " + std::to_string(this->weight) +
            + "\nMood -> " + std::to_string(this->mood) +
            + "\n";
    }

    int get_mood() const {
        return this->mood;
    }

    float get_weight() const {
        return this->weight;
    }

    void set_weight(const float& weight_value) noexcept {
        weight = weight_value ? weight_value : 0.0f;
    }

    void eat(const float& how_much) {
        if (how_much >= 10.0f) {
            ++this->age;
            this->weight += how_much / 2;
        }
        else this->weight += how_much;
    }

    void walk() {
        ++this->mood;
    }

    void dance() {
        this->mood += 2;
    }

    void work() {
        this->mood < 0 ? this->mood -= 2 : this->mood = 0;
    }
};
