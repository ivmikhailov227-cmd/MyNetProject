#include <iostream>


void run_prog1();
void run_prog2();
void run_prog3();
void run_prog4();

int main() {
	std::cout << "Choose program (1-4): " << std::endl;
	std::cout << "1. Display the array." << std::endl;
	std::cout << "2. Min and Max numbers in the array." << std::endl;
	std::cout << "3. Two-dimensional array." << std::endl;
	std::cout << "4. Reverse bubble sort." << std::endl;
	int choice;
	if (!(std::cin >> choice)) return 0;

	switch (choice) {
	case 1: run_prog1(); break;
	case 2: run_prog2(); break;
	case 3: run_prog3(); break;
	case 4: run_prog4(); break;
	default: std::cout << "Invalid choice\n"; break;
	}

	return 0;
}
