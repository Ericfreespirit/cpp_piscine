#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap {

public:

    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& );
    ~ClapTrap();


    ClapTrap    &operator=(const ClapTrap&);

    void    attack(std::string const & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

private:

    std::string     _name;
    int             _energy;
    int             _dammage;
    int             _hitpoints;
};

#endif