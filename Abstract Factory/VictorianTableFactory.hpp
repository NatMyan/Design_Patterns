#ifndef VICTORIAN_TABLE_FACTORY_HPP
#define VICTORIAN_TABLE_FACTORY_HPP

#include "TableFactory.hpp"
#include "VictorianTable.hpp"

struct VictorianTableFactory : TableFactory {
    virtual std::unique_ptr<Table> make() const override;
};

#endif // VICTORIAN_TABLE_FACTORY
