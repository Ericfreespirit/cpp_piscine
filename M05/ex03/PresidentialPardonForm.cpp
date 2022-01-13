#include "PresidentialPardonForm.hpp"
PresidentialPardonForm::PresidentialPardonForm(const std::string &name):
Form(name, 25, 5),
_name(name),
_grade_sign(25),
_grade_exec(5),
_sign(false)
{}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ref){
	*this = ref;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &ref){
	this->_name = ref._name;
	this->_grade_sign = ref._grade_sign;
	this->_grade_exec = ref._grade_exec;
	this->_sign = ref._sign;
	return (*this);
}

void PresidentialPardonForm::action()const{
	std::cout << this->_name << " has been forgiven by Zafod Beeblebrox";
	std::cout << std::endl;
}