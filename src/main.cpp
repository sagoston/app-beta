#include "mathlib/mathlib.h"
#include <iostream>

int main() {
    std::cout << "add(10,20)=" << mathlib::add(10, 20) << "\n";
    std::cout << "greet=" << mathlib::greet("beta") << "\n";
    return 0;
}
