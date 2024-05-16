#include "singleton_w_mutex.hpp"

#include <iostream>

int main () {
    Singleton& s1 = *Singleton::getInstance();
    Singleton& s2 = *Singleton::getInstance();

    std::cout << s1.getValue() << std::endl;
    std::cout << s2.getValue() << std::endl;
}