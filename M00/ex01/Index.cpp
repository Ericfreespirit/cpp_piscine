#include "Index.hpp"
#include "Contact.hpp"
#include <iomanip>
#include <string>
#include <ctype.h>



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

void	Index::print_contact(int index) const
{
	std::string str;
	std::cout << std::setw(10) << index << "|";
	str = this->_contact[index].getFirstName();
	if (str.length() > 10)
	{
		str.erase(9);
		str.append(1, '.');
	}
	std::cout << std::setw(10) << str << "|";
	str = this->_contact[index].getLastName();
	if (str.length() > 10)
	{
		str.erase(9);
		str.append(1, '.');
	}
	std::cout << std::setw(10) << str << "|";
	str = this->_contact[index].getPhone();
	if (str.length() > 10)
	{
		str.erase(9);
		str.append(1, '.');
	}
	std::cout << std::setw(10) << str << "|";
	std::cout << std::endl;
}

int	Index::search() const
{
	std::string str;
	int index;

	this->print_index();
	std::cout << "Enter the index required to display phone number: ";
	std::getline(std::cin, str);
	if (std::cin.eof())
		return (1);
	else if (str.length() > 1 || !std::isdigit(str[0]) || std::stoi(str) > this->_index_contact || std::stoi(str) < 0)
	{
		std::cout << "Please enter an index between 0 and " <<   this->_index_contact << std::endl;
		return (0);
	}
	else
		this->print_contact(std::stoi(str));
	return (0);
}


int	Index::_replace(int index)
{
	std::string str;

	std::cout << "Enter first name of the contact: ";
	std::getline(std::cin, str);
	if (std::cin.eof())
		return (1);
	this->_contact[index].setFirstName(str);

	std::cout << "Enter last name of the contact: ";
	std::getline(std::cin, str);
	if (std::cin.eof())
		return (1);
	this->_contact[index].setLastName(str);

	std::cout << "Enter nickname of the contact: ";
	std::getline(std::cin, str);
	if (std::cin.eof())
		return (1);
	this->_contact[index].setNickname(str);

	std::cout << "Enter phone number of the contact: ";
	std::getline(std::cin, str);
	if (std::cin.eof())
		return (1);
	this->_contact[index].setPhone(str);

	std::cout << "Enter darkest secret of the contact: ";
	std::getline(std::cin, str);
	if (std::cin.eof())
		return (1);
	this->_contact[index].setSecret(str);
	return (0);
}

int	Index::update()
{
	std::string str;
	int index;

	this->print_index();
	std::cout << "Enter the index required to update the contact: ";
	std::getline(std::cin, str);
	if (std::cin.eof())
		return (1);
	else if (str.length() > 1 || !std::isdigit(str[0]) || std::stoi(str) > this->_index_contact || std::stoi(str) < 0)
	{
		std::cout << "Please enter an index between 0 and " <<   this->_index_contact << std::endl;
		return (0);
	}
	else
		if (this->_replace(std::stoi(str)) == 1)
			return (1);
	return (0);
}