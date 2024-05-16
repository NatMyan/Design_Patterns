#ifndef LIST_HPP
#define LIST_HPP

#include <list>

class List {
    public:
        List() = default;

    public:
        void insert(int elem);
        void remove();
        int size();

    private:
        std::list<int> lstForStack;
};

#endif // LIST_HPP