#ifndef SHIP_HPP
#define SHIP_HPP

#include "Transport.hpp"

class Ship : public Transport {
    public:
        void deliver() override;
};

#endif // SHIP_HPP