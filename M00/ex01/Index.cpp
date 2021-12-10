#include "Index.hpp"
#include "Contact.hpp"
#include <iomanip>
#include <string>

Index::Index() : _index_contact(0)
{}

Index::~Index(void)
{}


int	Index::add()
{
	std::string str;
	const int i = this->_index_contact;
	
	if (i >= MAX)
	{
		std::cout << "Maximum contact reached, please update you contact." << std::endl;
		return (0);
	}
	std::cout << "Enter first name of the contact: ";
	std::getline(std::cin, str);
	if (std::cin.eof())
		return (1);
	this->_contact[i].setFirstName(str);

	std::cout << "Enter last name of the contact: ";
	std::getline(std::cin, str);
	if (std::cin.eof())
		return (1);
	this->_contact[i].setLastName(str);

	std::cout << "Enter nickname of the contact: ";
	std::getline(std::cin, str);
	if (std::cin.eof())
		return (1);
	this->_contact[i].setNickname(str);

	std::cout << "Enter phone number of the contact: ";
	std::getline(std::cin, str);
	if (std::cin.eof())
		return (1);
	this->_contact[i].setPhone(str);

	std::cout << "Enter darkest secret of the contact: ";
	std::getline(std::cin, str);
	if (std::cin.eof())
		return (1);
	this->_contact[i].setSecret(str);

	this->_index_contact++;
	return(0);
}


void	Index::print_index() const
{
	std::string str;
	int	i = 0;

	while(i < this->_index_contact)
	{
		std::cout << std::setw(10) << i << "|";
		str = this->_contact[i].getFirstName();
		if (str.length() > 10)
		{
			str.erase(9);
			str.append(1, '.');
		}
		std::cout << std::setw(10) << str << "|";
		str = this->_contact[i].getLastName();
		if (str.length() > 10)
		{
			str.erase(9);
			str.append(1, '.');
		}
		std::cout << std::setw(10) << str << "|";
				str = this->_contact[i].getNickname();
		if (str.length() > 10)
		{
			str.erase(9);
			str.append(1, '.');
		}
		std::cout << std::setw(10) << str << "|";

		std::cout << std::endl;
		i++;
	}
}

int	Index::search() const
{
	std::string str;
	int index;

	this->print_index();
	/*
		get index of user
		display number
	*/
	std::cout << "Enter the index required to display phone number" << std::endl;
	std::cout << "$> ";
	std::getline(std::cin, str);
	index = std::stoi(str);
	/*
	if (std::cin.eof())
		return (1);
	else if (index > this->_index_contact || index < 0)
	{
		std::cout << "Wrong index" << std::endl;
		return (0);
	}
*/
	return (0);
}