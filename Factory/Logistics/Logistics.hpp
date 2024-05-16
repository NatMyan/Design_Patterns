#ifndef LOGISTICS_HPP
#define LOGISTICS_HPP

#include "Transport.hpp"

#include <memory>

class Logistics {
    public:
        void planDelivery();
        virtual std::unique_ptr<Transport> createTransport() = 0;
};


#endif // LOGISTICS_HPP