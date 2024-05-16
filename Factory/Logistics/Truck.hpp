#ifndef TRUCK_HPP
#define TRUCK_HPP

#include "Transport.hpp"

class Truck : public Transport {
    public:
        void deliver() override;
};

#endif // TRUCK_HPP
