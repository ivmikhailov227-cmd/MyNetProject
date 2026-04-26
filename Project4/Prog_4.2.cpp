#include <iostream>

void run_prog2(){
	
	int a;
	int sum = 0;
	int digit =0;
	std::cout << "Enter any integer:" << std::endl;
	std::cin >> a;
	
	while(a != 0){
		
		digit = a % 10;
		sum += digit;
		a /= 10;
		
		
		
	}
	std::cout << "Digit sum = " << sum;
	
}

