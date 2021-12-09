#include "PhoneBook.class.hpp"

int main()
{
	class Command cmd;
	std::string buff;

	std::cout << "== PhoneBook ==" << std::endl;
	while (buff.compare(0, 4, "EXIT") != 0)
	{
		std::cout << "Command available: [ADD] [SEARCH] [EXIT]" << std::endl;
		std::cout << "$> "; 
		std::getline (std::cin, buff);
		if (buff.compare(0, 3, "ADD")== 0)
			cmd.add();
		else if (buff.compare(0, 6, "SEARCH") == 0)
			cmd.search();
		else
			std::cout << "Error: command not found" << std::endl;
		std::cout << std:: endl;
	}
	
	return (0);
}
