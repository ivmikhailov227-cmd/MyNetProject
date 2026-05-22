#include <iostream>

void reverse(int* Ptr, int n) {
	std::cout << "After the reverse function: ";

	for (int i = n - 1; i >= 0; i--) {
		std::cout << Ptr[i] << " ";
	}

}
void run_prog3() {
	int Arr[]{ 1,2,3,4,5,6,7,8,9 };
	int* aPtr = Arr;
	int n = sizeof(Arr) / sizeof(Arr[0]);

	std::cout << "Before the reverse function: ";
	for (int j = 0; j < n; j++) {
		std::cout << Arr[j] << " ";

	}
	std::cout << '\n';

	reverse(aPtr, n);
}

