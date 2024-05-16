#include "RoadLogistics.hpp"
#include "Truck.hpp"

#include <memory>

std::unique_ptr<Transport> RoadLogistics::createTransport() {
    return std::make_unique<Truck>();
}