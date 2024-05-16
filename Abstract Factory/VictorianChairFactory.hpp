#ifndef VICTORIAN_CHAIR_FACTORY_HPP
#define VICTORIAN_CHAIR_FACTORY_HPP

#include "ChairFactory.hpp"
#include "VictorianChair.hpp"

// struct VictorianChair; 
// this line doesn't work, when VictorianChair.hpp (definition) isn't included, and this is open, cause make_unique uses its type

struct VictorianChairFactory : ChairFactory {
    virtual std::unique_ptr<Chair> make() const override;
};

#endif // VICTORIAN_CHAIR_FACTORY
