#include "Zombie.hpp"


Zombie::Zombie ()
{}

Zombie::~Zombie ( void ){
    std::cout << this->_name << " burn..." << std::endl;
}

void    Zombie::announce( void ) const{
    std::cout << "<" << this->_name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name( std::string name ){
    this->_name = name;
}
