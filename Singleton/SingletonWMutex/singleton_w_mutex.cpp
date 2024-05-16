#include "singleton_w_mutex.hpp"

std::atomic<Singleton*> Singleton::instance(nullptr);
std::mutex Singleton::mutex;

Singleton::Singleton () : value{0} {
    ++value;
}

int Singleton::getValue() const {
    return value;
}

Singleton* Singleton::getInstance() {
    Singleton* temp = instance.load(std::memory_order_acquire);
    if (temp == nullptr) {
        std::lock_guard<std::mutex> lock(mutex);
        temp = instance.load(std::memory_order_relaxed);
        if (temp == nullptr) {
            temp = new Singleton;
            instance.store(temp, std::memory_order_release);
        }
    }
    return temp;
}

/*
Singleton& Singleton::getInstance() {
    if (instance == nullptr) 
        std::lock_guard<std::mutex> lock(mutex); 
        if (instance == nullptr) 
            instance = new Singleton;
    return *instance;
}
*/

