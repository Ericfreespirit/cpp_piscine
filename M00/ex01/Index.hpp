#ifndef INDEX_H
#define INDEX_H
#include <iostream>
#include "Contact.hpp"
#define MAX 8

class Index
{
	public:
		Index(void);
		~Index(void);

		int		add(void);
		int		print_index(void)const;
		void	print_contact(int index)const;
		int		search(void) const;
		int		update();

	private:
		Contact	_contact[MAX];
		int			_nb_contact;
		int			_replace(int index);

};

#endif
