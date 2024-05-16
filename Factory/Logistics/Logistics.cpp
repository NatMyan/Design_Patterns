#include "Logistics.hpp"

void Logistics::planDelivery() {
    std::unique_ptr<Transport> vehicle = createTransport();
    vehicle->deliver();
}