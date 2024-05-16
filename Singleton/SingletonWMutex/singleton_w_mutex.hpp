#ifndef SINGLETON_W_MUTEX_HPP
#define SINGLETON_W_MUTEX_HPP

#include <atomic>
#include <mutex>

class Singleton {
    public:
        static Singleton* getInstance();
        int getValue() const;
        
    private:
        Singleton(); // = default;
        ~Singleton() = default;
        Singleton (const Singleton&) = delete;
        Singleton& operator=(const Singleton&) = delete;
    
    private:
        static std::atomic<Singleton*> instance;
        static std::mutex mutex;
        int value;
};

#endif // SINGLETON_W_MUTEX_HPP