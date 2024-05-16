#ifndef TENSORFLOW_MODEL_TRAINER_HPP
#define TENSORFLOW_MODEL_TRAINER_HPP

#include "ModelTrainer.hpp"
#include <string>

class TensorFlowModelTrainer : public ModelTrainer { // Refined abstraction
    public:
        TensorFlowModelTrainer() : ModelTrainer("tf") {};
        void predict(); 
};

#endif // TENSORFLOW_MODEL_TRAINER_HPP