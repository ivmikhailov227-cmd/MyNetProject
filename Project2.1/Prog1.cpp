#include <iostream>

enum class Months {

	January = 1,
    February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December

};

void run_prog1() {

	int m_num = 0;


	do {
		std::cout << "Enter the number of the month" << std::endl;
		std::cin >> m_num;

		if (m_num == 0) {
			std::cout << "Goodbye\n";
			break;
		}

		switch (static_cast<Months>(m_num)) {

		case Months::January: std::cout << "January" << std::endl; break;
		case Months::February: std::cout << "February" << std::endl; break;
		case Months::March: std::cout << "March" << std::endl; break;
		case Months::April: std::cout << "April" << std::endl; break;
		case Months::May: std::cout << "May" << std::endl; break;
		case Months::June: std::cout << "June" << std::endl; break;
		case Months::July: std::cout << "July" << std::endl; break;
		case Months::August: std::cout << "August" << std::endl; break;
		case Months::September: std::cout << "September" << std::endl; break;
		case Months::October: std::cout << "October" << std::endl; break;
		case Months::November: std::cout << "November" << std::endl; break;
		case Months::December: std::cout << "December" << std::endl; break;
		default:std::cout << "Wrong number" << std::endl; break;
		}

	} while (m_num != 0);
	
		
}