#include "PhoneBook.class.hpp"

int main()
{
	char buff[10];

	std::cout << "PhoneBook" << std::endl;
	std::cout << "Command available: [ADD] [SEARCH] [EXIT]" << std::endl;
	std::cout << "$> "; 
	std::cin >> buff;
	std::cout << buff << std::endl;
	return (0);
}
