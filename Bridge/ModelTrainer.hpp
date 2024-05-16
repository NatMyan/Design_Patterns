#ifndef MODEL_TRAINER_HPP
#define MODEL_TRAINER_HPP

#include "FrameworkImpl.hpp"

#include <memory>

class ModelTrainer { // Abtstraction
    public:
        ModelTrainer(std::string implStyle);
        void trainModel();
        void evaluateModelAccuracy();
    
    protected:
        std::unique_ptr<FrameworkImpl> impl_;
};

#endif // MODEL_TRAINER_HPP