#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap {

public:

    ClapTrap(std::string name);
    ClapTrap();
    ClapTrap(const ClapTrap &);
    ~ClapTrap();

    ClapTrap &operator=(const ClapTrap &clap);

    void            attack(std::string const & target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
    int             getDammage() const;
    int             getEnergypoints()const;
    int             getHitpoints()const;
    std::string     getName()const;

protected:

    std::string     _name;
    int             _energy;
    int             _dammage;
    int             _hitpoints;
};

#endif