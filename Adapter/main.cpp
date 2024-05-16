#include "Adapter.hpp"

#include <iostream>

int main () {
    List lst;
    Adapter stck(lst);
    stck.push(4);
    stck.push(5);
    stck.push(6);
    stck.push(7);

    std::cout << "top elem: " << stck.top() << std::endl;

    std::cout << "size before pop: " << stck.size() << std::endl;
    stck.pop();
    std::cout << "size after pop: " << stck.size() << std::endl;
}