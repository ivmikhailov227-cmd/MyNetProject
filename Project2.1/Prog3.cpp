#include <iostream>
#include <string>

struct Address {
	std::string city = "Unknown";
	std::string street = "Unknown";
	int building = 0;
	int flat = 0;
	int postCode = 0;
};

void displayAddress(Address& addr) {
	std::cout << "City: " << addr.city << std::endl;
	std::cout << "Street: " << addr.street << std::endl;
	std::cout << "Building: " << addr.building << std::endl;
	std::cout << "Flat: " << addr.flat << std::endl;
	std::cout << "Post Code: " << addr.postCode << std::endl;
}

 void run_prog3() {
	Address addr1{ .city = "London", .street = "Kensington Rd", .building = 2, .flat = 3, .postCode = 198096 };
	Address addr2{ .city = "New-York", .street = "Fith Avenue", .building = 10, .flat = 36, .postCode = 676543 };

	displayAddress(addr1);
	std::cout << "\n";
	displayAddress(addr2);
}