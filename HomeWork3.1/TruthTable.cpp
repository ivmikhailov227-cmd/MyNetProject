#include <iostream>

int main() {
    bool a, b;
    std::cout << std::boolalpha; 

    a = true;  b = true;
    std::cout << a << ' ' << b << ' ' << (a || b) << '\n';

    a = true;  b = false;
    std::cout << a << ' ' << b << ' ' << (a || b) << '\n';

    a = false; b = true;
    std::cout << a << ' ' << b << ' ' << (a || b) << '\n';

    a = false; b = false;
    std::cout << a << ' ' << b << ' ' << (a || b) << '\n';

    // Далее аналогично для &&
    return 0;
}