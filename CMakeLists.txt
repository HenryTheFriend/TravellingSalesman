cmake_minimum_required(VERSION 3.12)
project(TravellingSalesman)

set(CMAKE_CXX_STANDARD 14)

add_executable(TravellingSalesman main.cpp city.cpp city.hpp tour.cpp tour.hpp genetic_algorithm.cpp genetic_algorithm.hpp)