#include "ICharacter.hpp"
#include <iostream>

ICharacter::ICharacter(){};

ICharacter::ICharacter(const ICharacter &ref){
    *this = ref;
}

ICharacter::~ICharacter(){};


ICharacter &ICharacter::operator=(const ICharacter &ref){
    *this = ref;
    return (this);
}