#ifndef TENSORFLOW_IMPL_HPP
#define TENSORFLOW_IMPL_HPP

#include "FrameworkImpl.hpp"

class TensorFlowImpl : public FrameworkImpl { // Concrete impl
    public:
        void train();
        void calculateAccuracy();
        void predict(); 
};

#endif // TENSORFLOW_IMPL_HPP