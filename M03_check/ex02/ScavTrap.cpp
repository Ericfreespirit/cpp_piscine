#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


ScavTrap::ScavTrap(std::string name):
ClapTrap(name){
    std::cout << "Constructor ScavTrap <" << this->_name  << "> created" << std::endl;
}

ScavTrap::ScavTrap():
ClapTrap("no_name"){
    std::cout << "Constructor ScavTrap <" << this->_name  << "> created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav) :
ClapTrap(scav){
    *this = scav;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ref){
    this->_name = ref._name;
    this->_energy = ref._energy;
    this->_dammage = ref._dammage;
    this->_hitpoints = ref._hitpoints;
    return (*this);
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
