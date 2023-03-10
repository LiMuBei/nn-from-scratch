set(Boost_USE_STATIC_LIBS OFF)
find_package(Boost REQUIRED COMPONENTS unit_test_framework)
include_directories(${Boost_INCLUDE_DIRS})

add_executable(Tests_run NeuronTest.cpp ErrorFunctionsTest.cpp)
target_link_libraries(Tests_run ${Boost_LIBRARIES})
target_link_libraries(Tests_run NeuralNetwork_lib)