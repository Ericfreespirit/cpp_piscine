#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap{

public:

    FragTrap(std::string name);
    FragTrap(const FragTrap&);
    ~FragTrap();

    FragTrap    &operator=(const FragTrap&);
    void        highFivesGuy(void)const;

};

#endif