#ifndef BREAD_FOR_MEAT_HPP
#define BREAD_FOR_MEAT_HPP

#include "MeatDecorator.hpp"

#include <string>

class BreadForMeat : public MeatDecorator {
    public:
        BreadForMeat (std::string bread) : bread_ {bread} {}
    
    public:
        void boil();
    
    private:
        void addBread();

    private:
        std::string bread_;

};

#endif // BREAD_FOR_MEAT_HPP
