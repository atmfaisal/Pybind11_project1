cmake_minimum_required(VERSION 3.16.3)
project(atmfaisal)
add_subdirectory(pybind11)
pybind11_add_module(test main.cpp)