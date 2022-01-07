#ifndef AMATERIA_H
#define AMATERIA_H
#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria{
public:
    AMateria();
    AMateria(std::string const & type);
    AMateria(const AMateria &ref);
    virtual ~AMateria();

    AMateria &operator=(const AMateria &ref);

    virtual std::string const &getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

protected:
	std::string _type;

};

#endif