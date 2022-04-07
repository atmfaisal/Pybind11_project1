#include <pybind11/pybind11.h>

// First Function Test

int summation(int var1, int var2) {
    return var1 + var2;
}


// Prime Check
bool prime_check(int var)
{
    bool is_prime = true;

    if(var == 0 || var == 1) {
        is_prime = false;
    }

    for(int i = 2; i <= var / 2; ++i) {
        if( var % i) {
            is_prime = false;
            break;
        }
    }
 return is_prime;
}

// Factorial Function
long factorial (long n) {
    if (n>1) 
        return n * factorial(n-1);
    else 
        return 1;
}

PYBIND11_MODULE(test, handle) {
handle.doc() = "Example of docstring!";
handle.def("summation", &summation);
handle.def("prime_check", &prime_check);
handle.def("factorial", &factorial);
}