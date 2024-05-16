#include "FurnitureFactory.hpp"

int main() {
    FurnitureFactory factory;

    std::unique_ptr<Chair> chair = factory.makeFinalChair("victorian");
    std::unique_ptr<Table> table = factory.makeFinalTable("modern");

    return 0;
}