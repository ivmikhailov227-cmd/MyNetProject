#include <iostream>

void run_prog1()
{
	int a;
	short b;
	long c;
	long long d;
	float e;
	double f;
	long double g;
	bool h;

	std::cout << "int: " << &a << " " << sizeof(a) << std::endl;
	std::cout << "short: " << &b << " " << sizeof(b) << std::endl;
	std::cout << "long: " << &c << " " << sizeof(c) << std::endl;
	std::cout << "long long: " << &d << " " << sizeof(d) << std::endl;
	std::cout << "float: " << &e << " " << sizeof(e) << std::endl;
	std::cout << "double: " << &f << " " << sizeof(f) << std::endl;
	std::cout << "long double: " << &g << " " << sizeof(g) << std::endl;
	std::cout << "bool: " << &h << " " << sizeof(h) << std::endl;

}