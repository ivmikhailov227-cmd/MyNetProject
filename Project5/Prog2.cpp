#include <iostream>

void run_prog2() {

	int Arr2[10] = { 7, 4, 3, 10, 5, 6, 9, 8, 1, 2 };
	int min_val = Arr2[0], max_val = Arr2[0];

	std::cout << "Array: ";

	for (int i = 0; i < 10; i++) {

		std::cout << Arr2[i];
		if (i != 9) std::cout << ", ";
	}

	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		if (min_val > Arr2[i])
		{
			min_val = Arr2[i];
		}


		if (max_val < Arr2[i])
		{
			max_val = Arr2[i];
		}


	}

	std::cout << "Minimal element value: " << min_val << std::endl;
	std::cout << "Maximum element value: " << max_val << std::endl;
}