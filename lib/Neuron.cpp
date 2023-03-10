//
// Created by Alexander Kasper on 10.03.23.
//

#include "Neuron.h"
#include <iostream>
#include <sstream>

namespace neural {
    Neuron::Neuron() : _weights(2) {}

    Neuron::Neuron(int inputs) : _weights(inputs) {}

    void Neuron::print() {
        std::cout << "Neuron weights:" << std::endl;
        std::stringstream ss;
        for (auto it = _weights.begin(); it != _weights.end(); it++) {
            if (it != _weights.begin()) {
                ss << " ";
            }
            ss << *it;
        }
        std::cout << ss.str() << std::endl;
    }

    void Neuron::setWeights(std::vector<double> &weights) {
        _weights.resize(weights.size());
        std::copy(weights.begin(), weights.end(), _weights.begin());
    }

    double Neuron::evaluate(std::vector<double> &inputs) {
        double result = 0;
        if (inputs.size() != _weights.size()) {
            throw std::logic_error("Number of inputs doesn't match number of weights");
        }

        for (auto i = 0; i < _weights.size(); i++) {
            result += _weights.at(i) * inputs.at(i);
        }
        return result;
    }
} // neural