#ifndef TABLE_FACTORY_HPP
#define TABLE_FACTORY_HPP

#include "Table.hpp"

#include <memory>

struct TableFactory {
    virtual std::unique_ptr<Table> make() const = 0;
    virtual ~TableFactory() = default;
};

#endif // TABLE_FACTORY_HPP