#include "singleton_Meyers.hpp"

#include <iostream>

int main () {
    MeyersSingleton& s1 = MeyersSingleton::getInstance();
    MeyersSingleton& s2 = MeyersSingleton::getInstance();
    
    std::cout << s1.getValue() << std::endl;
    std::cout << s2.getValue() << std::endl;
}