#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>

class MateriaSource : public IMateriaSource{
public:
    MateriaSource();
    MateriaSource(const MateriaSource &ref);
    virtual ~MateriaSource();

    MateriaSource &operator=(const MateriaSource &ref);

    void        learnMateria(AMateria*);
    AMateria*   createMateria(std::string const & type);
};

#endif