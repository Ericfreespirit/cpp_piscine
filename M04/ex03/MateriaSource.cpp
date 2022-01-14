#include "MateriaSource.hpp"


MateriaSource::MateriaSource() : 
IMateriaSource(),
_nb_spell(0){
	for (int i = 0; i < MAX_SPELL; i++)
		this->_arr_spell[i] = NULL;
};

MateriaSource::MateriaSource(const MateriaSource &ref){
    *this = ref;
}

MateriaSource::~MateriaSource(){
		for (int i = 0; i < this->_nb_spell; i++)
			delete _arr_spell[i];
};


MateriaSource &MateriaSource::operator=(const MateriaSource &ref){
    return (*this);
}

void MateriaSource::learnMateria(AMateria* spell){
	if (this->_nb_spell >= MAX_SPELL)
	{
		std::cout << "Max spell achieve" << std::endl;
		delete spell;
		return ;
	}
	this->_arr_spell[this->_nb_spell++] = spell;
}

AMateria* MateriaSource::createMateria(std::string const &type){
  for (int i = 0; i < this->_nb_spell; i++){
		if (this->_arr_spell[i]->getType() == type)
			return(_arr_spell[i]->clone());
	}
	return (0);
}