/*
 * Program name: drink.cpp
 * Author: Sahar Musleh
 * Date last updated: 11/30/2025
 * Purpose: Implements Drink class methods with exception handling for invalid input values.
 */

#include "drink.h"
#include <iostream>

void Drink::setSize(const std::string& s) {
    if (s != "small" && s != "medium" && s != "large") {
        throw std::invalid_argument("Invalid size: " + s);
    }
    size = s;
}

void Drink::setTemperature(const std::string& t) {
    if (t != "hot" && t != "cold") {
        throw std::invalid_argument("Invalid temperature: " + t);
    }
    temperature = t;
}

void Drink::setBase(const std::string& b) {
    if (b != "coffee" && b != "tea") {
        throw std::invalid_argument("Invalid base: " + b);
    }
    base = b;
}

void Drink::addFlavor(const std::string& f) {
    if (f.empty()) {
        throw std::invalid_argument("Flavor cannot be empty");
    }
    flavors.push_back(f);
}

void Drink::display() const {
    std::cout << "\nDrink Details:\n";
    std::cout << "Size: " << size << "\n";
    std::cout << "Temperature: " << temperature << "\n";
    std::cout << "Base: " << base << "\n";
    std::cout << "Flavors: ";
    for (const auto& flavor : flavors) {
        std::cout << flavor << " ";
    }
    std::cout << "\n";
}
