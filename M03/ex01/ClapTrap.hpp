#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap {

public:

    ClapTrap(std::string name);
    ClapTrap(void);
    ClapTrap(const ClapTrap &);
    ~ClapTrap();

    ClapTrap &operator=(const ClapTrap &clap);

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