#include "BreadForMeat.hpp"
#include "BasturmaForMeat.hpp"
#include "Pork.hpp"

#include <iostream>

int main() {
    Meat* pork = new Pork();
    Meat* basturmaPork = new BasturmaForMeat("spicy");
    Meat* breadBasturmaPork = new BreadForMeat("whole grain");

    std::cout << "Plain pork:" << std::endl;
    pork->boil();
    std::cout << std::endl;

    std::cout << "Pork with basturma:" << std::endl;
    basturmaPork->boil();
    std::cout << std::endl;

    std::cout << "Pork with basturma and bread:" << std::endl;
    breadBasturmaPork->boil();

    delete pork;
    delete basturmaPork;
    delete breadBasturmaPork;

    return 0;
}
