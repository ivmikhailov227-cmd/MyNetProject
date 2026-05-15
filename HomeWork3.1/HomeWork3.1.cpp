#include <iostream>

int main()
{
    bool a, b;
    std::cout << std::boolalpha;

    a = true;  b = true;
    std::cout << "Task 1:" << "\n\n";

    std::cout << "Operator || :" <<  std::endl << std::endl;
    
    

    std::cout << a << ' ' << b << ' ' << (a || b) << '\n';

    a = true;  b = false;
    std::cout << a << ' ' << b << ' ' << (a || b) << '\n';

    a = false; b = true;
    std::cout << a << ' ' << b << ' ' << (a || b) << '\n';

    a = false; b = false;
    std::cout << a << ' ' << b << ' ' << (a || b) << "\n\n";

    std::cout << "Operator && :" << std::endl << std::endl;
    a = true;  b = true;
    std::cout << a << ' ' << b << ' ' << (a && b) << '\n';

    a = false;  b =  true;
    std::cout << a << ' ' << b << ' ' << (a && b) << '\n';

    a = true; b = false;
    std::cout << a << ' ' << b << ' ' << (a && b) << '\n';

    a = false; b = false;
    std::cout << a << ' ' << b << ' ' << (a && b) << "\n\n";

    std::cout << "Task 2:" << "\n\n";

    std::cout << "Decrementing numbers" << "\n\n";

    int x, y, z;

    std::cout << "Enter the first number: ";
    std::cin >> x;
    std::cout << "Enter the second number: ";
    std::cin >> y;
    std::cout << "Enter the third number: ";
    std::cin >> z;

    int max = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);
    int min = (x < y) ? ((x < z) ? x : z) : ((y < z) ? y : z);
    int mid = x + y + z - max - min;

    std::cout << "Result: " << max << " " << mid << " " << min;



    
    return 0;
}


