#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):
_name(name),
_energy(50),
_dammage(20),
_hitpoints(100){
    std::cout << "Constructor ClapTrap <" << this->_name  << "> created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap){
    *this = clap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap){
    *this = clap;
    return (*this);
}

ClapTrap::~ClapTrap(){
    std::cout << "Constructor ClapTrap <" << this->_name  << "> destroyed" << std::endl;
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
