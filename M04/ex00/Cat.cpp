#include "Cat.hpp"
#include <iostream>

/*
    Constructor / Destructor
*/
Cat::Cat(){
    this->_type = "Cat";
    std::cout << "Default Constructor Cat create" << std::endl;
}

Cat::Cat(const Cat &ref){
    this->_type = ref._type;
    std::cout << "Copied Constructor " << this->_type << " create" << std::endl;
}

Cat::~Cat(){
    std::cout << "Destructor Cat delete" << std::endl;
}

/*
    Operator
*/
Cat &Cat::operator=(const Cat &ref){
    this->_type = ref._type;
    return (*this);
}

/*
    Member function
*/

void    Cat::makeSound() const{
    std::cout << "<" << this->_type << "> Miaouuuuu" << std::endl; 
}
