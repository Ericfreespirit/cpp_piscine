#ifndef HUMAN_A_H
#define HUMAN_A_H

#include "Weapon.hpp"
#include <iostream>

class HumanA {


public:

    HumanA(std::string name, Weapon &wpn);
    ~HumanA();

    const void    attack( void );

private:
    Weapon &_wpn;
    std::string _name;
};


#endif
