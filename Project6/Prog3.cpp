#include <iostream>

int fib(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

void run_prog3() {
    int n;
    std::cout << "Enter a number (1-46): ";
    std::cin >> n;

    std::cout << "Fibonacci numbers: ";
    for (int i = 0; i < n; ++i) {
        std::cout << fib(i);
        if (i + 1 < n) std::cout << ' ';
    }
    std::cout << '\n';
}
