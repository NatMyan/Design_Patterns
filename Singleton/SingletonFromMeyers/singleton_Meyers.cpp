#include "singleton_Meyers.hpp"

// MeyersSingleton::MeyersSingleton()= default;
MeyersSingleton::~MeyersSingleton()= default; 

MeyersSingleton::MeyersSingleton() : value {0} {
    ++value;
}

int MeyersSingleton::getValue() const {
    return value;
}

MeyersSingleton& MeyersSingleton::getInstance() {
    static MeyersSingleton instance;
    return instance;
}

