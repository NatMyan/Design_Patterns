#include "ModernChairFactory.hpp"

std::unique_ptr<Chair> ModernChairFactory::make() const {
    return std::make_unique<ModernChair>();
}