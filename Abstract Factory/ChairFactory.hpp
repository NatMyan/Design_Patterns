#ifndef CHAIR_FACTORY_HPP
#define CHAIR_FACTORY_HPP

#include "Chair.hpp"

#include <memory>

struct ChairFactory {
        virtual std::unique_ptr<Chair> make() const = 0;
        virtual ~ChairFactory() = default;
};

#endif // CHAIR_FACTORY_HPP