//
// Created by Alexander Kasper on 10.03.23.
//

#ifndef NEURALNETWORKS_RUN_ERRORFUNCTIONS_H
#define NEURALNETWORKS_RUN_ERRORFUNCTIONS_H

#include <vector>

namespace neural::error_functions {
    double meanAbsolute(std::vector<double>& actual, std::vector<double>& target);

    double meanSquared(std::vector<double>& actual, std::vector<double>& target);
}

#endif //NEURALNETWORKS_RUN_ERRORFUNCTIONS_H
