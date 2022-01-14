#include "RobotomyRequestForm.hpp"
RobotomyRequestForm::RobotomyRequestForm(const std::string &name):
Form(name, 72, 45),
_name(name),
_grade_sign(72),
_grade_exec(45),
_sign(false)
{}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ref){
	*this = ref;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &ref){
	this->_name = ref._name;
	this->_grade_sign = ref._grade_sign;
	this->_grade_exec = ref._grade_exec;
	this->_sign = ref._sign;
	return (*this);
}

void RobotomyRequestForm::action()const{
	srand (time(NULL));
	int	per = rand() % 2;

	if (per == 1)
		std::cout << "Bzzzzz ! I'm " << this->_name << " the robot" << std::endl;
	else 
		std::cout << "Hi ! I'm " << this->_name << " the human" << std::endl;
}

// std::ostream &operator<<(std::ostream &os, RobotomyRequestForm &ref){
// 	os << "hello" << std::endl;
// 	return (os);
// }