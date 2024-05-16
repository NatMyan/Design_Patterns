#include "Adapter.hpp"

void Adapter::push(int elen) {
    lstForStack.insert(elen);
    topElem = elen;
}

void Adapter::pop() {
    lstForStack.remove();
}

int Adapter::top() {
    return topElem;
}  

int Adapter::size() {
    return lstForStack.size();
}
  
