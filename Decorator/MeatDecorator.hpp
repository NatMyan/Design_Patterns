#ifndef MEAT_DECORATOR_HPP
#define MEAT_DECORATOR_HPP

#include "Meat.hpp"

class MeatDecorator : public Meat {
    public:
        MeatDecorator() = default;
        MeatDecorator (Meat* meat) : meat_{meat} {}

    protected:
       void boil();
    
    protected:
        Meat* meat_;
};

#endif // MEAT_DECORATOR_HPP