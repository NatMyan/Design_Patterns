#ifndef SINGLETON_MEYERS_HPP
#define SIGNLETON_MEYERS_HPP

class MeyersSingleton{
    public:
        static MeyersSingleton& getInstance();
        int getValue() const;
        
    private:
        MeyersSingleton();
        ~MeyersSingleton();

        MeyersSingleton(const MeyersSingleton&)= delete;
        MeyersSingleton& operator=(const MeyersSingleton&)= delete;
    
    private:
        int value;
};

#endif // SINGLETON_MEYERS_HPP