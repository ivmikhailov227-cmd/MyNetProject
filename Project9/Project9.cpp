#include <iostream>


void run_prog1();
void run_prog2();
void run_prog3();


int main() {
	std::cout << "Choose program (1-3): " << std::endl;
	std::cout << "1. Array output." << std::endl;
	std::cout << "2. Swap again." << std::endl;
	std::cout << "3. Reversing Arrays." << std::endl;

	int choice;
	if (!(std::cin >> choice)) return 0;

	switch (choice) {
	case 1: run_prog1(); break;
	case 2: run_prog2(); break;
	case 3: run_prog3(); break;

	default: std::cout << "Invalid choice\n"; break;
	}

	return 0;
}
