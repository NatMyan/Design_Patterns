#ifndef TABLE_HPP
#define TABLE_HPP

struct Table {
    virtual void makeTable() = 0;
    virtual ~Table() = default;
};

#endif // TABLE_HPP