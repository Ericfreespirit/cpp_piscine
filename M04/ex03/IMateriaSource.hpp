#ifndef IMATERIASOURCE_H
#define IMATERIASOURCE_H
#include "AMateria.hpp"

class IMateriaSource
{
public:
    IMateriaSource();
    IMateriaSource(const IMateriaSource &ref);

    IMateriaSource &operator=(const IMateriaSource &ref);

    virtual ~IMateriaSource();
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif