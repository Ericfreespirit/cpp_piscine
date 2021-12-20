#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) :
ClapTrap(name){
        std::cout << "Constructor FragTrap <" << this->_name  << "> created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &frag):
ClapTrap(frag){
    *this = frag;
}

FragTrap &FragTrap::operator=(const FragTrap &frag){
    *this = frag;
    return (*this);
}


FragTrap::~FragTrap(){
    std::cout << "Constructor FragTrap <" << this->_name  << "> destroyed" << std::endl;
}

void    FragTrap::highFivesGuy()const{
    std::cout << "high five" << std::endl;
}