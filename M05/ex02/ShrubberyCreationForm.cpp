#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &name):
Form(name, 145, 137),
_name(name),
_grade_sign(145),
_grade_exec(137),
_sign(false)
{}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ref){
	*this = ref;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ref){
	this->_name = ref._name;
	this->_grade_sign = ref._grade_sign;
	this->_grade_exec = ref._grade_exec;
	this->_sign = ref._sign;
	return (*this);
}

void ShrubberyCreationForm::action()const{
	std::cout << "in shruberry acton" << std::endl;
}