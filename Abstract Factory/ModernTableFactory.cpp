#include "ModernTableFactory.hpp"

std::unique_ptr<Table> ModernTableFactory::make() const {
    return std::make_unique<ModernTable>();
}