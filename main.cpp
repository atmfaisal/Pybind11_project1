#include <pybind11/pybind11.h>

int summation(int var1, int var2) {
    return var1 + var2;
}

PYBIND11_MODULE(test, handle) {
handle.doc() = "Example of docstring!";
handle.def("summation", &summation);
}