#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):
_name(name),
_hitpoints(10),
_energy(10),
_dammage(0){
    std::cout << "Constructor <" << this->_name  << "> created" << std::endl;
}

ClapTrap::ClapTrap():
_name("no_name"),
_hitpoints(10),
_energy(10),
_dammage(0){
    std::cout << "Constructor <" << this->_name  << "> created" << std::endl;
}


ClapTrap::~ClapTrap(){
    std::cout << "Destructor <" << this->_name  << "> destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap){
    *this = clap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap){

    this->_name = clap._name;
    this->_energy = clap._energy;
    this->_dammage = clap._dammage;

    return (*this);
}


void    ClapTrap::attack(std::string const & target){
    std::cout << "ClapTrap " << this->_name << " attack " << target << ", ";   
    std::cout << "causing " << this->_dammage << " points of damage" << std::endl;    
}

void    ClapTrap::takeDamage(unsigned int amount){
    this->_energy -= amount;
    this->_energy = this->_energy <= 0 ? 0 : this->_energy;

    std::cout << "ClapTrap " << this->_name << " take " << amount ;   
    std::cout << " points of damage " <<", " << this->_energy << " energy point remaining";
    std::cout << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount){
    this->_energy += amount;

    std::cout << "ClapTrap " << this->_name << " be repaired " << amount ;   
    std::cout << " points of energy " <<", " << this->_energy << " energy point remaining";
    std::cout << std::endl;
}
