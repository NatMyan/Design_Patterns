#include "List.hpp"

void List::insert(int elem) {
    lstForStack.push_back(elem);
}

void List::remove() {
    lstForStack.pop_back();
}

int List::size() {
    return lstForStack.size();
}