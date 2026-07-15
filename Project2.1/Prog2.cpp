#include <string>
#include <iostream>

struct Account {

	int id = 0;
	std::string name = "None";
	double balance = 0.0;
	double newBalance = 0.0;
};

void displayAccount(Account& acc) {
	std::cout << "Enter Account Number: "  << std::endl;
	std::cin >> acc.id;
	std::cout << "Enter Owner'sName: " << std::endl;
	std::cin >> acc.name;
	std::cout << "Enter Your Balance:"  << std::endl;
	std::cin >> acc.balance;
	
}

void changeBalance(Account& acc, double newBalance) {
	acc.balance = newBalance;
}

void run_prog2() {

	Account acc;
	displayAccount(acc);

	double newBalance;
	std::cout << "Enter Your New Balance: ";
	std::cin >> newBalance;

	changeBalance(acc, newBalance);

	std::cout << "Your Account: " << acc.id << ", " << acc.name
		<< ", Balance = " << acc.balance << std::endl;
}
