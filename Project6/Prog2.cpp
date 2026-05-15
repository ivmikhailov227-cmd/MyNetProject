#include <iostream>

void Pow(const int value, const int power)
{
	int result = 1;
	for (int i = 0; i < power; i++)
	{
		result *= value;
	}

	std::cout << value << " to the power of " << power << " = " << result << std::endl;

}

void run_prog2() {

	Pow(5, 2);
	Pow(3, 3);
	Pow(4, 4);
}