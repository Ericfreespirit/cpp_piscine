#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(){}

AMateria::AMateria(std::string const & type){}

AMateria::AMateria(const AMateria &ref){
    *this = ref;
}

AMateria::~AMateria(){};


AMateria &AMateria::operator=(const AMateria &ref){
    return (*this);
}

std::string const &AMateria::getType()const{
	std:: cout << this->_type << std::endl;
	return (this->_type);
}