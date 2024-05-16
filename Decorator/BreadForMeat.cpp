#include "BreadForMeat.hpp"

#include <iostream>

void BreadForMeat::boil () {
    MeatDecorator::boil();
    addBread();
}

void BreadForMeat::addBread () {
    std::cout << "Add bread : " << bread_ << std::endl;
}