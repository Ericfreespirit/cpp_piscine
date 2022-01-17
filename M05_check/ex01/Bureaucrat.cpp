#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : 
_name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &ref){
	*this = ref;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &ref){
	this->_name = ref._name;
	this->_grade = ref._grade;
	return (*this);
}

std::ostream &operator<<(std::ostream& os, Bureaucrat& ref){
	os << "<"<< ref.getName() << ">, bureaucrat grade <" << ref.getGrade() << ">";
	return (os);
}

Bureaucrat::~Bureaucrat(){}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade too low");
}

std::string		Bureaucrat::getName()const{return(this->_name);}
int						Bureaucrat::getGrade()const{return(this->_grade);}


void					Bureaucrat::increGrade(){
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void					Bureaucrat::decreGrade(){
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void					Bureaucrat::signForm(Form &ref){
	try {
		ref.beSigned(*this);
		std::cout << "<"<<this->getName() << "> signs <" << ref.getName() << ">";
		std::cout << std::endl;
	}
	catch(std::exception &e){
		std::cerr << "<" << this->_name << "> cannot sign because ";
		std::cerr << e.what() <<std::endl;
	} 
}