#include "Contact.hpp"
#include "Index.hpp"

int main()
{
	Index book;
	std::string buff;

	std::cout << "== PhoneBook ==" << std::endl;
	while (1)
	{
		std::cout << "Command available: [ADD] [SEARCH] [UPDATE] [EXIT]" << std::endl;
		std::cout << "$> "; 
		std::getline (std::cin, buff);
		if (buff.compare(0, 3, "ADD") == 0)
		{
			if (book.add() == 1)
				break ;
		}
		else if (buff.compare(0, 6, "SEARCH") == 0)
		{
			if (book.search() == 1)
				break ;
		}
		else if (buff.compare(0, 4, "EXIT") == 0 || std::cin.eof())
			break ;
		else if (buff.compare(0, 6, "UPDATE") == 0)
		{
			if (book.update() == 1)
				break ;
		}
		else
			std::cout << "Error: command not found" << std::endl;
		std::cout << std:: endl;
	}
	return (0);
}
