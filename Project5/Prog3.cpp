#include <iostream>

void run_prog3() {

	int Arr3[3][6] =
	{
		{6,4,5,2,3,1},
		{10,7,8,12,11,9},
		{17,13,15,18,14,16}
	};
	
	std::cout << "Array: " << std::endl;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 6; ++j) {
			std::cout << Arr3[i][j];
			if (j != 5) std::cout << "\t";
		}
		std::cout << '\n';
	}
	int min_idx = Arr3[0][0], max_idx = Arr3[0][0];
	int min_i = 0, min_j = 0;
	int max_i = 0, max_j = 0;

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 6; j++) {

			if (Arr3[i][j] < min_idx) {

				min_idx = Arr3[i][j];
				min_i = i; min_j = j;
			}
			if (Arr3[i][j] > max_idx) {

				max_idx = Arr3[i][j];
				max_i = i; max_j = j;
			}
		}
	}

	std::cout << "Minimal element index: " << min_i << " " << min_j << std::endl;
	std::cout << "Maximum element index: " << max_i << " " << max_j << std::endl;

}