#include <iostream>

void print(int* Ptr, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << Ptr[i] << " ";
	}
	std::cout << std::endl;
}

void run_prog1() {

	int Arr[] { 1,2,3,4,5,6,7,8,9 };
	int* aPtr = Arr;

	int Arr1[] { 6,5,4,8 };
	int* aPtr1 = Arr1;

	int Arr2[] { 1,4,3,7,5 };
	int* aPtr2 = Arr2;


	print(aPtr, sizeof(Arr) / sizeof(Arr[0]));
	print(aPtr1, sizeof(Arr1) / sizeof(Arr1[0]));
	print(aPtr2, sizeof(Arr2) / sizeof(Arr2[0]));
}