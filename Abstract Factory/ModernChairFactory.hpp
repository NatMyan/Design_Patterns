#ifndef MODERN_CHAIR_FACTORY_HPP
#define MODERN_CHAIR_FACTORY_HPP

#include "ChairFactory.hpp"
#include "ModernChair.hpp"

struct ModernChairFactory : ChairFactory {
    virtual std::unique_ptr<Chair> make() const override;
};

#endif // MODERN_CHAIR_FACTORY
