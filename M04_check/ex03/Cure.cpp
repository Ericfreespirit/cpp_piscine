#include "Cure.hpp"
#include "AMateria.hpp"
#include <iostream>

Cure::Cure(){
	this->_type = "cure";
};

Cure::Cure(const Cure &ref){
	this->_type = "cure";
    *this = ref;
}

Cure::~Cure(){};


Cure &Cure::operator=(const Cure &ref){
	(void)ref;
    return (*this);
}

AMateria* Cure::clone() const{
	Cure *tmp = new Cure(*this);
  return (tmp);
}

void Cure::use(ICharacter& target){
	std::cout << "* heals "<< target.getName()<<"'s wounds *";
	std::cout << std::endl;
}

std::string const &Cure::getType()const{
	return (this->_type);
}
