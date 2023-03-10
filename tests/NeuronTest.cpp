//
// Created by Alexander Kasper on 10.03.23.
//

#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN MainTest

#include <boost/test/unit_test.hpp>

#include "Neuron.h"

using namespace neural;
namespace utf = boost::unit_test;

BOOST_AUTO_TEST_SUITE(NeuronTests, *utf::tolerance(1e-10))

    BOOST_AUTO_TEST_CASE(Evaluation) {
        Neuron n;
        auto inputs = std::vector<double>{1.0, 1.0};

        auto result = n.evaluate(inputs);

        BOOST_TEST(result == 0.0);
    }

    BOOST_AUTO_TEST_CASE(Evaluation_Custom_Weights) {
        Neuron n(4);
        auto weights = std::vector<double>{0.25, 0.25, 0.25, 0.25};
        n.setWeights(weights);

        auto inputs = std::vector<double>{1.0, 1.0, 1.0, 1.0};

        auto result = n.evaluate(inputs);

        BOOST_TEST(result == 1.0);
    }

BOOST_AUTO_TEST_SUITE_END()