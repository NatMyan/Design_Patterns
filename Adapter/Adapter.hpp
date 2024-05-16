#ifndef ADAPTER_HPP
#define ADAPTER_HPP

#include "Stack.hpp"
#include "List.hpp"

#include <list>

class Adapter : public Stack, List {
    public:
        Adapter(List lst) : lstForStack{lst} {};

    public:
        void push(int elen);
        void pop();
        int top();
        int size();

    private:
        List lstForStack;
        int topElem;
};

#endif // ADAPTER_HPP