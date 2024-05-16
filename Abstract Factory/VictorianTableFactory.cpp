#include "VictorianTableFactory.hpp"

std::unique_ptr<Table> VictorianTableFactory::make() const {
    return std::make_unique<VictorianTable>();
}