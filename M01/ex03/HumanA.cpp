#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wpn) :
_name(name), _wpn(wpn)
{}

HumanA::~HumanA()
{}

const void    HumanA::attack( void ){
    std::cout << this->_name << " attacks with his ";
    std::cout <<_wpn.getType() << std::endl;
}