#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap {

public:

    ClapTrap(std::string name);
    ~ClapTrap();

    void    attack(std::string const & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

protected:

    std::string     _name;
    int             _energy;
    int             _dammage;
    int             _hitpoints;
};

#endif