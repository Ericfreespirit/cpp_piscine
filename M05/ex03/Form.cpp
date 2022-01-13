#include "Form.hpp"

Form::Form():
_name("NULL"),
_grade_sign(0),
_grade_exec(0),
_sign(false)
{}

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
const char* Form::NotSign::what() const throw(){return ("Form not sign");}


std::string Form::getName()const {return (this->_name);}
int Form::getGradeExec()const {return (this->_grade_exec);}
int Form::getGradeSign()const {return (this->_grade_sign);}
bool Form::getSign()const {return (this->_sign);}

void	Form::beSigned(Bureaucrat const &ref) {
	if (ref.getGrade() > this->_grade_sign)
		throw Form::GradeTooLowException();
	this->_sign = true;
}

void Form::execute(Bureaucrat const &executor)const{
	if (this->_sign == false)
		throw Form::NotSign();
	else if (executor.getGrade() > this->_grade_exec)
		throw Form::GradeTooLowException();
	this->action(); 
}
