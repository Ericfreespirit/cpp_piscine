#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap{

public:

    DiamondTrap(std::string name);
    DiamondTrap(void);
    DiamondTrap(const DiamondTrap&);
    ~DiamondTrap();

    DiamondTrap    &operator=(const DiamondTrap&);
    void        whoAmI(void)const;

private:
    std::string     _name;
};

#endif