#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) :
ClapTrap(name){
        std::cout << "Constructor FragTrap <" << this->_name  << "> created" << std::endl;
}

FragTrap::FragTrap() :
ClapTrap("no_name"){
        std::cout << "Constructor FragTrap <" << this->_name  << "> created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &frag):
ClapTrap(frag){
    *this = frag;
}

FragTrap &FragTrap::operator=(const FragTrap &ref){
    this->_name = ref._name;
    this->_energy = ref._energy;
    this->_dammage = ref._dammage;
    this->_hitpoints = ref._hitpoints;
    return (*this);
}


FragTrap::~FragTrap(){
    std::cout << "Destructor FragTrap <" << this->_name  << "> destroyed" << std::endl;
}

void    FragTrap::highFivesGuy()const{
    std::cout << "high five" << std::endl;
}