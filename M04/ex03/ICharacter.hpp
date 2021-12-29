#ifndef ICHARACTER_H
#define ICHARACTER_H
#include "AMateria.hpp"
#include <iostream>

class ICharacter
{
public:
    ICharacter();
    ICharacter(const ICharacter &ref);
    virtual ~ICharacter();

    ICharacter &operator=(const ICharacter &ref);

    virtual std::string const & getName() const = 0;
    // virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};
#endif