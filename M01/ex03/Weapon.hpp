#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>


class Weapon {

public:

    Weapon( std::string name );
    ~Weapon();

    const std::string &getType( void );
    void    setType(std:: string type);


private:
    std::string _type;

};


#endif