project(NeuralNetwork)

set(HEADER_FILES Neuron.h)

set(SOURCE_FILES Neuron.cpp ErrorFunctions.cpp ErrorFunctions.h)

add_library(NeuralNetwork_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})