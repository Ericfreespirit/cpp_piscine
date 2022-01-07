#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap {
    
public:
    ScavTrap(std::string name);
    ScavTrap(void);
    ScavTrap(const ScavTrap&);
    ~ScavTrap();

    ScavTrap    &operator=(const ScavTrap&);
    
    void    attack(std::string const & target);
    void    guardGate()const;

};

#endif