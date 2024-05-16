#include <iostream>
#include <vector>

//-----------------------------------------------------------
class Neuron {  // component
public:
    virtual void connect(Neuron* neuron) = 0;
};

//----------------------------------------------------------- 
class SingleNeuron : public Neuron {  // leaf
private:
    std::vector<Neuron*> connectedNeurons;

public:
    void connect(Neuron* neuron) override {
        connectedNeurons.push_back(neuron);
    }
};

//-----------------------------------------------------------
class NeuronLayer : public Neuron {  // composite
private:
    std::vector<Neuron*> neurons;

public:
    void addNeuron(Neuron* neuron) {
        neurons.push_back(neuron);
    }

    void connect(Neuron* neuron) override {
        for (Neuron* n : neurons) {
            n->connect(neuron);
        }
    }
};

//-----------------------------------------------------------
int main() {
    SingleNeuron neuron1;
    SingleNeuron neuron2;
    SingleNeuron neuron3;

    NeuronLayer layer1;
    layer1.addNeuron(&neuron1);
    layer1.addNeuron(&neuron2);

    NeuronLayer layer2;
    layer2.addNeuron(&neuron3);

    layer1.connect(&layer2);
    neuron3.connect(&layer1);
    neuron2.connect(&neuron1);
    layer1.connect(&neuron2);

    return 0;
}
