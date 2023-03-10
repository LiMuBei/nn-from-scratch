//
// Created by Alexander Kasper on 10.03.23.
//

#include <vector>
#include <numeric>

namespace neural::error_functions {
    double meanAbsolute(std::vector<double>& actual, std::vector<double>& target) {
        if (actual.size() != target.size()) {
            throw std::length_error("Actual and target sizes do not match");
        }

        auto diffs = std::vector<double>(actual.size());
        for(auto i = 0; i < actual.size(); i++) {
            diffs[i] = (std::fabs(actual.at(i) - target.at(i)));
        }

        return std::reduce(diffs.begin(), diffs.end(), 0.0) / (double) diffs.size();
    }

    double meanSquared(std::vector<double>& actual, std::vector<double>& target) {
        if (actual.size() != target.size()) {
            throw std::length_error("Actual and target sizes do not match");
        }

        auto diffs = std::vector<double>(actual.size());
        for(auto i = 0; i < actual.size(); i++) {
            auto d = actual.at(i) - target.at(i);
            diffs[i] = d * d;
        }

        return std::reduce(diffs.begin(), diffs.end(), 0.0) / (double) diffs.size();
    }
}