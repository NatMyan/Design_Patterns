#include "SeaLogistics.hpp"
#include "Ship.hpp"

#include <memory>

std::unique_ptr<Transport> SeaLogistics::createTransport() {
    return std::make_unique<Ship>();
}