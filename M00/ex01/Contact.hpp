#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>

class Contact
{
	public:
	Contact(void);
	~Contact(void);
	
	std::string	getFirstName(void)const;
	std::string	getLastName(void)const;
	std::string	getNickname(void)const;
	std::string	getPhone(void)const;
	std::string	getSecret(void)const;


	void setFirstName(std::string &str);
	void setLastName(std::string &str);
	void setNickname(std::string &str);
	void setPhone(std::string &str);
	void setSecret(std::string &str);

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone;
		std::string	_secret;
};


#endif
