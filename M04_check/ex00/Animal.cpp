#include "Animal.hpp"
#include <iostream>

/*
    Constructor / Destructor
*/
Animal::Animal() :
_type("Animal"){
    std::cout << "Default Constructor Animal create" << std::endl;
}

Animal::Animal(const Animal &ref):
_type(ref._type){
    std::cout << "Copied Constructor " << this->_type << " create" << std::endl;
}

Animal::~Animal(){
    std::cout << "Destructor Animal delete" << std::endl;
}

/*
    Operator
*/
Animal &Animal::operator=(const Animal &ref){
    this->_type = ref._type;
    return (*this);
}

/*
    Member function
*/
std::string Animal::getType()const{
    return(this->_type);
}

void         Animal::makeSound() const{
    std::cout << "<" << this->_type << "> *no sound*" << std::endl; 
}
