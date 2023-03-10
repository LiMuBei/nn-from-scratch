cmake_minimum_required(VERSION 3.24)
project(NeuralNetworks_run)

set(CMAKE_CXX_STANDARD 20)

set(SOURCE_FILES main.cpp)
add_executable(neural_run ${SOURCE_FILES})

include_directories(lib)
add_subdirectory(lib)

target_link_libraries(neural_run NeuralNetwork_lib)

add_subdirectory(tests)
