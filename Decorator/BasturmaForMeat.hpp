#ifndef BASTURMA_FOR_MEAT_HPP
#define BASTURMA_FOR_MEAT_HPP

#include "MeatDecorator.hpp"

#include <string>

class BasturmaForMeat : public MeatDecorator {
    public:
        BasturmaForMeat(std::string spices) : spices_{spices} {}

    public:
        void boil();
    
    private:
        void addBasturma();

    private:
        std::string spices_;
};

#endif // BASTURMA_FOR_MEAT_HPP