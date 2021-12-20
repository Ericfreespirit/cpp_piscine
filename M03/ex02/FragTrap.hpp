#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap{

public:

    FragTrap(std::string name);
    ~FragTrap();

    void highFivesGuy(void);

};

#endif