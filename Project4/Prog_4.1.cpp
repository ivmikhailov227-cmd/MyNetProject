#include <iostream>
using namespace std;

void run_prog1() {
	int a;
	int sum = 0;
	do{
		cout << "Enter an integer; enter 0 to finish the program: "<< endl;
		cin >> a;
		sum += a;
		
	}while(a != 0);
	
	cout << "Sum: " << sum;
	
	
}
