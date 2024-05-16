#include "FurnitureFactory.hpp"

FurnitureFactory::FurnitureFactory () {    
    chairFactories["victorian"] = std::make_unique<VictorianChairFactory>();
    chairFactories["modern"] = std::make_unique<ModernChairFactory>();

    tableFactories["victorian"] = std::make_unique<VictorianTableFactory>();
    tableFactories["modern"] = std::make_unique<ModernTableFactory>();
}

std::unique_ptr<Chair> FurnitureFactory::makeFinalChair (const std::string& name) {
    auto chair = chairFactories[name]->make();
    chair->makeChair();
    return chair;
}

std::unique_ptr<Table> FurnitureFactory::makeFinalTable (const std::string& name) {
    auto table = tableFactories[name]->make();
    table->makeTable();
    return table;
}