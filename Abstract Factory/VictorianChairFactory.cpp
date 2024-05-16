#include "VictorianChairFactory.hpp"

std::unique_ptr<Chair> VictorianChairFactory::make() const {
    return std::make_unique<VictorianChair>();
}