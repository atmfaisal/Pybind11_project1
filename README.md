# Integrating C++ with Python using Pybind11

## Pybind11
**pybind11** is a lightweight header-only library that exposes C++ types in Python and vice versa, mainly to create Python bindings of existing C++ code.

## Steps
1. Clone Pybind11 from github in the main project directory. [Link] (https://github.com/pybind/pybind11)
2. Create a CMakeLists.txt file
3. Create C++ and Python file and write your code.
4. Create a "build" directory in the project.
5. Terminal commands:

`mkdir build`

`cd build`

`camke ..`

`make`

`cmake .. && make && python3 ../test.py`
