#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>
#define MAX_SPELL 4

class MateriaSource : public IMateriaSource{
public:
    MateriaSource();
    MateriaSource(const MateriaSource &ref);
    virtual ~MateriaSource();

    MateriaSource &operator=(const MateriaSource &ref);

    void        learnMateria(AMateria*);
    AMateria*   createMateria(std::string const & type);

private : 
	AMateria *_arr_spell[MAX_SPELL];
	int			_nb_spell;

};

#endif