#include "PhoneBook.class.hpp"


// GET function
std::string	PhoneBook::getFirstName(void) const
{
	return (this->_fstname);
}

std::string	PhoneBook::getLastName(void) const
{
	return (this->_lstname);
}

std::string	PhoneBook::getNickname(void) const
{
	return (this->_nickname);
}

std::string	PhoneBook::getPhone(void) const
{
	return (this->_phone);
}

std::string	PhoneBook::getSecret(void) const
{
	return (this->_secret);
}


// SET function
void	PhoneBook::setFirstName(std::string &str)
{
	this->_fst_name = str;
}


void	PhoneBook::setLastName(std::string &str)
{
	this->_lst_name = str;
}

void	PhoneBook::setNickname(std::string &str)
{
	this->_nickname = str;
}

void	PhoneBook::setPhone(std::string &str)
{
	this->_phone = str;
}

void	PhoneBook::setSecret(std::string &str)
{
	this->_secret = str;
}

