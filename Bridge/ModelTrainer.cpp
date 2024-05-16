#include "ModelTrainer.hpp"
#include "TensorFlowImpl.hpp"

#include <string>
#include <iostream>

ModelTrainer::ModelTrainer(std::string implStyle) {
    if (implStyle == "tf") {
        impl_ = std::make_unique<TensorFlowImpl>();
    }
}

void ModelTrainer::trainModel() {
    impl_->train();
}

void ModelTrainer::evaluateModelAccuracy() {
    impl_->calculateAccuracy();
}