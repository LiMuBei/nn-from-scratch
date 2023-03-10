//
// Created by Alexander Kasper on 10.03.23.
//

#ifndef NEURALNETWORKS_NEURON_H
#define NEURALNETWORKS_NEURON_H

#include <vector>

namespace neural {

    class Neuron {
        std::vector<double> _weights;
    public:
        Neuron();

        explicit Neuron(int inputs);

        void setWeights(std::vector<double>& weights);

        double evaluate(std::vector<double>& inputs);

        void print();
    };

} // neural

#endif //NEURALNETWORKS_NEURON_H
