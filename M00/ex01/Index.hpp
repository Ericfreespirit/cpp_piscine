#ifndef INDEX_H
#define INDEX_H
#include <iostream>
#include "Contact.hpp"
#define MAX 1

class Index
{
	public:
		Index(void);
		~Index(void);

		int		add(void);
		void	print_index()const;
		int		search(void) const;

	private:
		Contact	_contact[MAX];
		int			_index_contact;

};

#endif
