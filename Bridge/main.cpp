#include "FrameworkImpl.hpp"
#include "ModelTrainer.hpp"
#include "TensorFlowModelTrainer.hpp"

int main() {
    TensorFlowModelTrainer tfModelTrainer;

    tfModelTrainer.trainModel();
    tfModelTrainer.evaluateModelAccuracy();
    tfModelTrainer.predict();

    return 0;
}