#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name):
ClapTrap(name + "_clap_name"),
FragTrap(name),
ScavTrap(name),
_name(name){

    this->_hitpoints = FragTrap::getHitpoints();
    this->_energy = ScavTrap::getEnergypoints();
    this->_dammage = FragTrap::getDammage();
    std::cout << "Constructor DiamondTrap <" << this->_name  << "> created" << std::endl;
}

DiamondTrap::DiamondTrap():
ClapTrap("no_name"),
FragTrap("no_name"),
ScavTrap("no_name"),
_name("no_name"){

    std::cout << "Constructor DiamondTrap <" << this->_name  << "> created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &Diamond):
ClapTrap(Diamond),
FragTrap(Diamond),
ScavTrap(Diamond){
    *this = Diamond;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &ref){
    this->_name = ref._name;
    this->_energy = ref._energy;
    this->_dammage = ref._dammage;
    this->_hitpoints = ref._hitpoints;
     return (*this);
}


DiamondTrap::~DiamondTrap(){
    std::cout << "Destructor DiamondTrap <" << this->_name  << "> destroyed" << std::endl;
}

void        DiamondTrap::whoAmI(void)const{
    std::cout << "My name is " << this->_name << std::endl;
    std::cout << "Clap name is " << ClapTrap::getName() << std::endl;
}
