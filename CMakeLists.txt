cmake_minimum_required(VERSION 3.24)
project(num_test)

set(CMAKE_CXX_STANDARD 23)

add_executable(num_test main.cpp src/norms_eigen_decomposition.cpp src/norms_eigen_decomposition.h src/temp/test.cpp src/temp/test.h)
