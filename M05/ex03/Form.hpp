#ifndef FORM_H
#define FORM_H
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

// Abstract Class
class Form {

public:
	Form();
	Form(const std::string &, const int &, const int &);
	Form(const Form &ref);
	virtual ~Form();

	Form &operator=(const Form &ref);

	std::string 			getName()const;
	int 					getGradeExec()const;
	int 					getGradeSign()const;
	bool					getSign()const;

	void beSigned(Bureaucrat const &ref);
	void execute(Bureaucrat const &executor)const;
 
private:
	std::string	_name;
	int					_grade_sign;
	int					_grade_exec;
	bool				_sign; //init false

	virtual void action()const = 0;

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
public :
		class NotSign : public std::exception{
			public:
				const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, Form &ref);
#endif