#include <iostream>
#include <cstdlib>
#include <algorithm>

void run_prog4()

{
	int Arr4[10];
	int  t;
	int b;
	int size;

	size = 10;

	for (t = 0; t < size; t++) Arr4[t] = rand() % 50 + 1;

	std::cout << "Unsorted array:\n ";

	for (t = 0; t < size; t++) {

		std::cout << Arr4[t] << ' ';
		if (t == size - 1) std::cout << '\n';
	}

	std::cout << "Sorted array:\n ";

	for (b = 0; b < size - 1; b++)
	{

		for (t = 0; t < size - 1; t++)
		{
			if (Arr4[t] < Arr4[t + 1])
			{
				std::swap(Arr4[t], Arr4[t + 1]);
			}
		}

	}

	for (t = 0; t < size; t++) std::cout << Arr4[t] << ' ';

}