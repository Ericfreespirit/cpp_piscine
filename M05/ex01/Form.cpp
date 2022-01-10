#include "Form.hpp"

Form::Form(const std::string &name, const int &grade_sign, const int &grade_exec): 
_name(name), _sign(false)
{
	if (grade_sign < 1 || grade_exec < 1)
		throw Form::GradeTooHighException();
	else if (grade_sign > 150 || grade_exec > 150)
		throw Form::GradeTooLowException();

	this->_grade_sign = grade_sign;
	this->_grade_exec = grade_exec;
}

Form::Form(const Form &ref){
	*this = ref;
}

Form &Form::operator=(const Form &ref){
	this->_name = ref._name;
	this->_grade_sign = ref._grade_sign;
	this->_grade_exec = ref._grade_exec;
	this->_sign = ref._sign;
	return (*this);
}

std::ostream &operator<<(std::ostream &os, Form &ref){
	os << "<" << ref.getName() << "> form" << std::endl;
	os << "<"<< ref.getGradeExec() << "> grade exec| <" 
	<< ref.getGradeSign() << "> grade sign" << std::endl;
	os << "<" << ref.getSign() << ">> sign";
	return (os);
}


Form::~Form(){}

const char* Form::GradeTooHighException::what() const throw(){return ("Grade too high");}
const char* Form::GradeTooLowException::what() const throw(){return ("Grade too low");}

std::string Form::getName()const {return (this->_name);}
int Form::getGradeExec()const {return (this->_grade_exec);}
int Form::getGradeSign()const {return (this->_grade_sign);}
bool Form::getSign()const {return (this->_sign);}

void	Form::beSigned(const Bureaucrat &ref) {
	if (ref.getGrade() > this->_grade_sign)
		throw Form::GradeTooLowException();
	this->_sign = true;
}
