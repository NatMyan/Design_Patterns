#include <iostream>
#include <memory>

/*
A non-working code, because this is about the Factory dp, and not ML/AI algos 
(as I sadly don't have time to do finish this right now...)
*/

// Algo interface ----------------------------------------------------
class MachineLearningAlgorithm {
public:
    virtual void train(DataSet data) = 0;
    virtual Result predict(DataPoint input) = 0;
    virtual double evaluate(DataSet validationData) = 0;
};


// Concrete algos ----------------------------------------------------
class DecisionTreeAlgorithm : public MachineLearningAlgorithm {
    void train (DataSet data) {
        std::cout << "train w/decision tree" << std::endl;
    }

    Result predict(DataPoint input) {
        std::cout << "predict w/decision tree" << std::endl;
    }

    double evaluate(DataSet validationData) {
        std::cout << "evaluate w/decision tree" << std::endl;
    }
};


class RandomForestAlgorithm : public MachineLearningAlgorithm {
    void train (DataSet data) {
        std::cout << "train w/random forest" << std::endl;
    }

    Result predict(DataPoint input) {
        std::cout << "predict w/random forest" << std::endl;
    }

    double evaluate(DataSet validationData) {
        std::cout << "evaluate w/random forest" << std::endl;
    }
};


// Algo factory ------------------------------------------------------
class AlgorithmFactory {
public:
    static std::unique_ptr<MachineLearningAlgorithm> createDecisionTree() {
        return std::make_unique<DecisionTreeAlgorithm>();
    }

    static std::unique_ptr<MachineLearningAlgorithm> createRandomForest() {
        return std::make_unique<RandomForestAlgorithm>();
    }
};


int main() {
    std::unique_ptr<MachineLearningAlgorithm> selectedAlgorithm = AlgorithmFactory::createDecisionTree();
    
    selectedAlgorithm->train(trainingData);
    Result result = selectedAlgorithm->predict(inputData);
    double accuracy = selectedAlgorithm->evaluate(validationData);
        
    return 0;
}
