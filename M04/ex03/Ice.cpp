#include "Ice.hpp"
#include "AMateria.hpp"
#include <iostream>

Ice::Ice(){};

Ice::Ice(const Ice &ref){
    *this = ref;
}

Ice::~Ice(){};


Ice &Ice::operator=(const Ice &ref){
    *this = ref;
    return (this);
}

AMateria* Ice::clone() const{
    AMateria *ptr;
    return (ptr);
}

void Ice::use(ICharacter& target){

}

AMateria(std::string const & type);
    std::string const &getType() const; //Returns the materia type