#ifndef ROAD_LOGISTICS_HPP
#define ROAD_LOGISTICS_HPP

#include "Logistics.hpp"

class RoadLogistics : public Logistics {
    std::unique_ptr<Transport> createTransport();
};

#endif // ROAD_LOGISTICS_HPP