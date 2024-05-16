#ifndef FURNITURE_FACTORY_HPP
#define FURNITURE_FACTORY_HPP

#include "ModernChairFactory.hpp"
#include "ModernTableFactory.hpp"
#include "VictorianChairFactory.hpp"
#include "VictorianTableFactory.hpp"

#include <map>
#include <string>

class FurnitureFactory {
    public:
        FurnitureFactory (); 
    
    public:
        std::unique_ptr<Chair> makeFinalChair (const std::string& name); 
        std::unique_ptr<Table> makeFinalTable (const std::string& name);

    private:
        std::map<std::string, std::unique_ptr<ChairFactory> > chairFactories;
        std::map<std::string, std::unique_ptr<TableFactory> > tableFactories;
};

#endif // FURNITURE_FACTORY_HPP