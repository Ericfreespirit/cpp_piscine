#ifndef COMMAND_H
#define COMMAND_H
#include <iostream>
#include "PhoneBook.class.hpp"

#define MAX 8

class Command
{
	public:
		Command(void);
		~Command(void);

		void add(void);
		void search(void) const;

	private:
		PhoneBook	_contact[MAX];
		int			_index;

};

#endif
