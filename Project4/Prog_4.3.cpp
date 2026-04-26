#include <iostream>

void run_prog3(){
	
	int a;
	std::cout << "Enter any integer:" << std::endl;
	std::cin >> a;
	
	for(int i = 1; i <= 10; i++){
		
		std::cout << a << " x " << i << " = " << a * i << std::endl;
	}
}
