#ifndef SHRUBBERY_H
#define SHRUBBERY_H
#include "Form.hpp"
class ShrubberyCreationForm : public Form{

public:
	ShrubberyCreationForm(const std::string &);
	ShrubberyCreationForm(const ShrubberyCreationForm &);
	~ShrubberyCreationForm();

	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &ref);

	void	action()const;

private:
	std::string _name;
	int					_grade_sign;
	int					_grade_exec;
	bool				_sign;
};

#endif