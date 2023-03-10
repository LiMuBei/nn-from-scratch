//
// Created by Alexander Kasper on 10.03.23.
//
#define BOOST_TEST_DYN_LINK

#include <boost/test/unit_test.hpp>

#include "ErrorFunctions.h"

using namespace neural::error_functions;
namespace utf = boost::unit_test;

BOOST_AUTO_TEST_SUITE(MeanAbsolute, *utf::tolerance(1e-10))

    BOOST_AUTO_TEST_CASE(Simple) {
        auto actual = std::vector<double>{1.0};
        auto target = std::vector<double>{2.0};

        auto error = meanAbsolute(actual, target);

        BOOST_TEST(error == 1.0);
    }

    BOOST_AUTO_TEST_CASE(Multi) {
        auto actual = std::vector<double>{2.0, 2.0, 2.0};
        auto target = std::vector<double>{1.5, 1.5, 1.0};

        auto error = meanAbsolute(actual, target);

        BOOST_TEST(error == 2.0 / 3.0);
    }

BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE(MeanSquared, *utf::tolerance(1e-10))

    BOOST_AUTO_TEST_CASE(Simple) {
        auto actual = std::vector<double>{1.0};
        auto target = std::vector<double>{2.0};

        auto error = meanSquared(actual, target);

        BOOST_TEST(error == 1.0);
    }

    BOOST_AUTO_TEST_CASE(Multi) {
        auto actual = std::vector<double>{2.0, 3.0, 5.0};
        auto target = std::vector<double>{3.0, 3.0, 3.0};

        auto error = meanSquared(actual, target);

        BOOST_TEST(error == 5.0 / 3.0);
    }

BOOST_AUTO_TEST_SUITE_END()