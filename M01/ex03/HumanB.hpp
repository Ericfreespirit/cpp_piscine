#ifndef HUMAN_B_H
#define HUMAN_B_H

#include "Weapon.hpp"
#include <iostream>
class HumanB {


public:

    HumanB(std::string);
    ~HumanB();

    const void    attack( void );
    void    setWeapon(Weapon &wpn);

private:
    Weapon *_wpn;
    std::string _name;
};


#endif
