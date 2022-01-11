#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {

public:
    Zombie();
    ~Zombie();

    void    announce( void )const;
    void    set_name(std::string name);


private:
    std::string _name;
};

Zombie  *zombieHorde ( int N, std::string name );

#endif