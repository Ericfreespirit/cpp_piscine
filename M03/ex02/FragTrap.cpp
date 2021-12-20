#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) :
ClapTrap(name){
        std::cout << "Constructor FragTrap <" << this->_name  << "> created" << std::endl;
}

FragTrap::~FragTrap(){
    std::cout << "Constructor FragTrap <" << this->_name  << "> destroyed" << std::endl;
}

void    FragTrap::highFivesGuy()const{
    std::cout << "" << std::endl;
}