#include "HumanB.hpp"

HumanB::HumanB(std::string name) :
_name(name)
{}

HumanB::~HumanB()
{}

const void    HumanB::attack( void ){
    std::cout << this->_name << " attacks with his ";
    std::cout <<_wpn->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &wpn){
    this->_wpn = &wpn;
}