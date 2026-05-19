#include <iostream>

namespace add_ns {
    int calc(int a, int b) { return a + b; }
}

namespace sub_ns {
    int calc(int a, int b) { return a - b; }
}

namespace mul_ns {
    int calc(int a, int b) { return a * b; }
}

namespace div_ns {
    int calc(int a, int b) { return a / b; } 
}

void run_prog2() {

    int x = 6, y = 9;
    std::cout << "x = " << x << ", y = " << y << '\n';
    std::cout << "Addition: " << add_ns::calc(x, y) << '\n';
    std::cout << "Subtraction: " << sub_ns::calc(x, y) << '\n';
    std::cout << "Multiplication: " << mul_ns::calc(x, y) << '\n';
    std::cout << "Division: " << div_ns::calc(x, y) << '\n';

	
}