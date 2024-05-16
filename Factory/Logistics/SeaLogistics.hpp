#ifndef SEA_LOGISTICS_HPP
#define SEA_LOGISTICS_HPP

#include "Logistics.hpp"

class SeaLogistics : public Logistics {
    std::unique_ptr<Transport> createTransport();
};

#endif // SEA_LOGISTICS_HPP
