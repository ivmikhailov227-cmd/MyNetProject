#include <iostream>

void reverse(int* ptr, int n) {
	for (int i = 0; i < n / 2; ++i) {
	int tmp = ptr[i];
	ptr[i] = ptr[n - 1 - i];
	ptr[n - 1 - i] = tmp;
	}

}
void run_prog3() {
	int Arr[]{ 1,2,3,4,5,6,7,8,9 };
	int n = sizeof(Arr) / sizeof(Arr[0]);

	std::cout << "Before the reverse function: ";
	for (int j = 0; j < n; ++j) std::cout << Arr[j] << " ";
	std::cout << '\n';

	reverse(Arr, n);

	std::cout << "After the reverse function:  ";
	for (int j = 0; j < n; ++j) std::cout << Arr[j] << " ";
	std::cout << '\n';
}

