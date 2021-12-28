#include "WrongCat.hpp"
#include <iostream>

/*
    Constructor / Destructor
*/
WrongCat::WrongCat(){
    this->_type = "WrongCat";
    std::cout << "Default Constructor WrongCat create" << std::endl;
}

WrongCat::WrongCat(const WrongCat &ref){
    this->_type = ref._type;
    std::cout << "Copied Constructor " << this->_type << " create" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "Destructor WrongCat delete" << std::endl;
}

/*
    Operator
*/
WrongCat &WrongCat::operator=(const WrongCat &ref){
    this->_type = ref._type;
    return (*this);
}