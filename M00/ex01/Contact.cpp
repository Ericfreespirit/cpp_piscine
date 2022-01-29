#include "Contact.hpp"


Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}


// GET function
std::string	Contact::getFirstName(void) const
{
	return (this->_first_name);
}

std::string	Contact::getLastName(void) const
{
	return (this->_last_name);
}

std::string	Contact::getNickname(void) const
{
	return (this->_nickname);
}

std::string	Contact::getPhone(void) const
{
	return (this->_phone);
}

std::string	Contact::getSecret(void) const
{
	return (this->_secret);
}

// SET function
void	Contact::setFirstName(std::string &str)
{
	this->_first_name = str;
}
void	Contact::setLastName(std::string &str) 
{
	this->_last_name = str;
}

void	Contact::setNickname(std::string &str)
{
	this->_nickname = str;
}

void	Contact::setPhone(std::string &str)
{
	this->_phone = str;
}

void	Contact::setSecret(std::string &str)
{
	this->_secret = str;
}
