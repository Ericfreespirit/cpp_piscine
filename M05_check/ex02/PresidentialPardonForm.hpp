#ifndef PRESIDENT_H
#define PRESIDENT_H
#include "Form.hpp"

class PresidentialPardonForm : public Form{

public:
	PresidentialPardonForm(const std::string &);
	PresidentialPardonForm(const PresidentialPardonForm &);
	~PresidentialPardonForm();

	PresidentialPardonForm &operator=(const PresidentialPardonForm &ref);

	void	action()const;

private:
	std::string _name;
	int					_grade_sign;
	int					_grade_exec;
	bool				_sign;
};	

#endif