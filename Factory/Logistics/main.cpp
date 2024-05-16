#include "Logistics.hpp"
#include "RoadLogistics.hpp"
#include "SeaLogistics.hpp"

int main() {
    std::unique_ptr<Logistics> roadLogistics = std::make_unique<RoadLogistics>();
    std::unique_ptr<Logistics> seaLogistics = std::make_unique<SeaLogistics>();

    roadLogistics->planDelivery(); // land
    seaLogistics->planDelivery();  // sea

    return 0;
}