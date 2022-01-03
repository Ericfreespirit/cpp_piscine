#include "Cure.hpp"
#include "AMateria.hpp"
#include <iostream>

Cure::Cure(){
	this->_type = "cure";
};

Cure::Cure(const Cure &ref){
    *this = ref;
}

Cure::~Cure(){};


Cure &Cure::operator=(const Cure &ref){
	// this->_type = ref._type;
    return (*this);
}

AMateria* Cure::clone() const{
	Cure *tmp = new Cure(*this);
	tmp->_type = this->_type;
  return (tmp);
}

void Cure::use(ICharacter& target){

}

std::string const &Cure::getType()const{
	return (this->_type);
}
