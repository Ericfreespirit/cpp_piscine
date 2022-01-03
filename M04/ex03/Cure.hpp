#ifndef CURE_H
#define CURE_H
#include "AMateria.hpp"

class Cure : public AMateria{ 
	public:
    Cure();
    Cure(const Cure &ref);
    ~Cure();

    Cure &operator=(const Cure &ref);

    std::string const &getType() const; //Returns the materia type
    AMateria* clone() const;
    void use(ICharacter& target);

};

#endif