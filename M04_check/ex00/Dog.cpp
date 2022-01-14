#include "Dog.hpp"
#include <iostream>

/*
    Constructor / Destructor
*/
Dog::Dog(){
    this->_type = "Dog";
    std::cout << "Default Constructor Dog create" << std::endl;
}

Dog::Dog(const Dog &ref){
    this->_type = ref._type;
    std::cout << "Copied Constructor " << this->_type << " create" << std::endl;
}

Dog::~Dog(){
    std::cout << "Destructor Dog delete" << std::endl;
}

/*
    Operator
*/
Dog &Dog::operator=(const Dog &ref){
    this->_type = ref._type;
    return (*this);
}

/*
    Member function
*/

void    Dog::makeSound() const{
    std::cout << "<" << this->_type << "> Waaaaaf" << std::endl; 
}
