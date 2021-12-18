#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


ScavTrap::ScavTrap(std::string name):
ClapTrap(name){
    std::cout << "Constructor ScavTrap <" << this->_name  << "> created" << std::endl;
}

// ScavTrap::~ScavTrap():
// ~ClapTrap(){
//     std::cout << "Destructor ScavTrap <" << this->_name  << "> destroyed" << std::endl;
// }