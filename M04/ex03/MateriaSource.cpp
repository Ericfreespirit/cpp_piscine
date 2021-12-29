#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){};

MateriaSource::MateriaSource(const MateriaSource &ref){
    *this = ref;
}

MateriaSource::~MateriaSource(){};


MateriaSource &MateriaSource::operator=(const MateriaSource &ref){
    return (*this);
}

void MateriaSource::learnMateria(AMateria* magic){

}

AMateria* MateriaSource::createMateria(std::string const & type){
    AMateria *ptr;
    return (ptr);
}