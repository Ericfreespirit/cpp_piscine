#include "Ice.hpp"
#include "AMateria.hpp"
#include <iostream>

Ice::Ice(){
	this->_type = "ice";
};

Ice::Ice(const Ice &ref){
	this->_type = "ice";
    *this = ref;
}

Ice::~Ice(){};


Ice &Ice::operator=(const Ice &ref){
	(void)ref;
  return (*this);
}

AMateria* Ice::clone() const{
	Ice *tmp = new Ice(*this);
	return (tmp);
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at "<< target.getName() <<" *";
	std::cout << std::endl;
}

std::string const &Ice::getType()const{
	return (this->_type);
}
