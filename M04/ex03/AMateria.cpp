#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(){}

AMateria::AMateria(std::string const & type){}

AMateria::AMateria(const AMateria &ref){
    *this = ref;
}

AMateria::~AMateria(){};


AMateria &AMateria::operator=(const AMateria &ref){
    *this = ref;
    return (*this);
}

void AMateria::use(ICharacter& target){

}