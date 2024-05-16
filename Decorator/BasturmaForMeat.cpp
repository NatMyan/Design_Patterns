#include "BasturmaForMeat.hpp"

#include <iostream>

void BasturmaForMeat::boil () {
    MeatDecorator::boil();
    addBasturma();
}

void BasturmaForMeat::addBasturma () {
    std::cout << "Add basturma : " << spices_ << std::endl;
}