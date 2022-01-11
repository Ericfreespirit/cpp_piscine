#ifndef FORM_H
#define FORM_H
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

public:
	Form(const std::string &, const int &, const int &);
	Form(const Form &ref);
	~Form();

	Form &operator=(const Form &ref);

	void beSigned(const Bureaucrat &ref);
	std::string 	getName()const;
	int 					getGradeExec()const;
	int 					getGradeSign()const;
	bool					getSign()const;


private:
	std::string	_name;
	int					_grade_sign;
	int					_grade_exec;
	bool				_sign; //init false

public :
		class GradeTooHighException : public std::exception{
			public:
				const char* what() const throw();
		};
public :
		class GradeTooLowException : public std::exception{
			public:
				const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, Form &ref);
#endif