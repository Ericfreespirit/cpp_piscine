#ifndef PHONE_BOOK_CLASS_H
#define PHONE_BOOK_CLASS_H
#include <iostream>

class PhoneBook
{
	public:
	PhoneBook(void);
	~PhoneBook(void);
	
	std::string	getFirstName(void)const;
	std::string	getLastName(void)const;
	std::string	getNickname(void)const;
	std::string	getPhone(void)const;
	std::string	getSecret(void)const;


	std::string	setFirstName(std::string &str);
	std::string	setLastName(std::string &str);
	std::string	setNickname(std::string &str);
	std::string	setPhone(std::string &str);
	std::string	setSecret(std::string &str);

	private:
		std::string	_fst_name;
		std::string	_lst_name;
		std::string	_nickname;
		std::string	_phone;
		std::string	_secret;
};


#endif
