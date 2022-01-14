#include "Dog.hpp"
#include <iostream>

/*
    Constructor / Destructor
*/
Dog::Dog(){
    this->_type = "Dog";
    this->_brain = new Brain();
    std::cout << "Default Constructor Dog create" << std::endl;
}

Dog::Dog(const Dog &ref) {
    *this = ref;
    std::cout << "Copied Constructor " << this->_type << " create" << std::endl;
}

Dog::~Dog(){
    delete this->_brain;
    std::cout << "Destructor Dog delete" << std::endl;
}

/*
    Operator
*/
Dog &Dog::operator=(const Dog &ref){
    this->_type = ref._type;
    this->_brain = new Brain();
    return (*this);
}

/*
    Member function
*/

void    Dog::makeSound() const{
    std::cout << "<" << this->_type << "> Waaaaaf" << std::endl; 
}

void    Dog::myBrain()const{
    std::cout << "I have a brain(" << this->_brain
    << ") with "<< this->_brain->getIdeasLen()
    << " IQ"<< std::endl;
}

int    Dog::getIdeasLen(void)const{
    return (this->_brain->getIdeasLen());
}
