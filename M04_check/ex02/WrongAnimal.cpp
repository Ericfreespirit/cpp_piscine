#include "WrongAnimal.hpp"
#include <iostream>

/*
    Constructor / Destructor
*/
WrongAnimal::WrongAnimal() :
_type("WrongAnimal"){
    std::cout << "Default Constructor WrongAnimal create" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &ref):
_type(ref._type){
    std::cout << "Copied Constructor " << this->_type << " create" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "Destructor WrongAnimal delete" << std::endl;
}

/*
    Operator
*/
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &ref){
    this->_type = ref._type;
    return (*this);
}

/*
    Member function
*/
std::string WrongAnimal::getType()const{
    return(this->_type);
}

void         WrongAnimal::makeSound() const{
    std::cout << "<" << this->_type << "> *weird sound*" << std::endl; 
}
