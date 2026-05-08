#include <iostream>

int sum(int a, int b) { 
    return a + b; 
}
int diff(int a, int b) { 
    return a - b; 
}
int multiplication(int a, int b) { 
    return a * b; 
}
double division(int a, int b) {
    if (b == 0) {
        std::cerr << "Division by zero\n";
        return 0.0;
    }
    return static_cast<double>(a) / b;
}

void run_prog1() {

    int a = 5, b = 10;


    std::cout << a << " + " << b << " = " << sum(a, b) << '\n';
    std::cout << a << " - " << b << " = " << diff(a, b) << '\n';
    std::cout << a << " * " << b << " = " << multiplication(a, b) << '\n';
    std::cout << a << " / " << b << " = " << division(a, b) << '\n';

}

