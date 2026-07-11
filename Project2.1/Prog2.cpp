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
	std::cout << "Enter Your New Balance:" << std::endl;
	std::cin >> acc.newBalance;
}

void run_prog2() {

	Account acc;
	displayAccount(acc);

	std::cout << "Your Account: " << acc.id << ", " << acc.name << ", " << acc.newBalance << std::endl;
}
