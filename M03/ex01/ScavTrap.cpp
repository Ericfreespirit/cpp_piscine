#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


ScavTrap::ScavTrap(std::string name):
ClapTrap(name){
    std::cout << "Constructor ScavTrap <" << this->_name  << "> created" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor ScavTrap <" << this->_name  << "> destroyed" << std::endl;
}

void    ScavTrap::attack(std::string const & target){
    std::cout << "ScavpTrap " << this->_name << " attack " << target << ", ";   
    std::cout << "causing " << this->_dammage << " points of damage" << std::endl;    
}

void    ScavTrap::guardGate()const{
    std::cout << "Scavtrap " << this->_name << " enterred in Gate keeper mode" << std::endl;
}
