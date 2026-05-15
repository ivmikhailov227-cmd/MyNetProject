
#include <iostream>


void run_prog1();
void run_prog2();


int main() {
	std::cout << "Choose program (1-2): " << std::endl;
	std::cout << "1. Variable addresses." << std::endl;
	std::cout << "2. Value swap." << std::endl;

	int choice;
	if (!(std::cin >> choice)) return 0;

	switch (choice) {
	case 1: run_prog1(); break;
	case 2: run_prog2(); break;

	default: std::cout << "Invalid choice\n"; break;
	}

	return 0;
}
