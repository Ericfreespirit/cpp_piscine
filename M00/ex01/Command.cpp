#include "Command.hpp"


Command::Command(void)
{
	return;
}

Command::~Command(void)
{
	return;
}


void	Command::add()
{
	std::string str;
	const int i = this->_index;
	
	std::cout << "Enter First name of the contact: ";
	std::getline(std::cin, str);
	this->_contact[i].setFirstName(str);
	++this->_index;
}

void	Command::search() const
{
	std::cout << _contact[0].getFirstName() << std::endl;
}
