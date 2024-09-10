#pragma once
#include "Worker.h"

Worker::Worker() {
    this->name = "no name";
    this->age = 0;
    this->weight = 0.0f;
    this->mood = 10;
}

std::string Worker::worker_to_string() {
    return "Name -> " + this->name
        + "\nAge -> " + std::to_string(this->age) +
        +"\nWeight -> " + std::to_string(this->weight) +
        +"\nMood -> " + std::to_string(this->mood) +
        +"\n";
}

int Worker::get_mood() const {
    return this->mood;
}

float Worker::get_weight() const {
    return this->weight;
}

void Worker::set_weight(const float& weight_value) noexcept {
    weight = weight_value ? weight_value : 0.0f;
}

void Worker::eat(const float& how_much) {
    if (how_much >= 10.0f) {
        ++this->age;
        this->weight += how_much / 2;
    }
    else this->weight += how_much;
}

void Worker::walk() {
    ++this->mood;
}

void Worker::dance() {
    this->mood += 2;
}

void Worker::work() {
    this->mood < 0 ? this->mood -= 2 : this->mood = 0;
}
