#ifndef ICHARACTER_H
#define ICHARACTER_H
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

class AMateria;

class ICharacter
{
public:
    virtual ~ICharacter();
    virtual std::string const & getName() const = 0;
    virtual int     getNbmat()const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;

protected:
	std::string _name;
};
#endif