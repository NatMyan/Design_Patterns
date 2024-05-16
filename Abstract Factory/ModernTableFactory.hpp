#ifndef MODERN_TABLE_FACTORY_HPP
#define MODERN_TABLE_FACTORY_HPP

#include "TableFactory.hpp"
#include "ModernTable.hpp"

struct ModernTableFactory : TableFactory {
    virtual std::unique_ptr<Table> make() const override;
};

#endif // MODERN_TABLE_FACTORY
