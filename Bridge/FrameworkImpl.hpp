#ifndef FRAMEWORK_IMPL_HPP
#define FRAMEWORK_IMPL_HPP

class FrameworkImpl { // Impl
    public:
        virtual ~FrameworkImpl() = default;
        virtual void train() = 0;
        virtual void calculateAccuracy() = 0;
        virtual void predict() = 0;
};

#endif // FRAMEWORK_IMPL_HPP