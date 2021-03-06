#include "Character.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

Character::Character(std:: string name): 
// ICharacter(),
_nb_mat(0){
	this->_name = name;
	for (int i = 0; i < 4; i++){
		this->_inventory[i] = NULL;
	}
}

Character::Character(const Character &ref){
	for (int i = 0; i < 4; i++){
		this->_inventory[i] = NULL;
	}
	this->_nb_mat = 0;
	*this = ref;
}

Character::~Character(){

	for (int i = 0; i < this->_nb_mat; i++){
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
};


Character &Character::operator=(const Character &ref){
	for (int i = 0; i < ref._nb_mat; i++)
	{
		if (this->_inventory[i] != NULL)
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
		if (ref._inventory[i]->getType() == "ice")
			this->_inventory[i] = new Ice();
		else if (ref._inventory[i]->getType() == "cure")
			this->_inventory[i] = new Cure();
	}
	this->_nb_mat = ref._nb_mat;
	this->_name = ref._name;

	return (*this);
}

std::string const &Character::getName()const{
	return (this->_name);
}


void Character::equip(AMateria* m){
	if (this->_nb_mat >= 4 || !m)
		return ;
	for (int i = 0; i < this->_nb_mat; i++){
		if (m == this->_inventory[i])
		{
			std::cerr << "Error: this adress[" << this->_inventory[i]
			<< "] of materia already equiped"
			<< std::endl;
			return;
		}
	}
	this->_inventory[this->_nb_mat++] = m;
}

void Character::unequip(int idx){

	if (idx >= this->_nb_mat)
		return;
	this->_nb_mat--;
	while(idx < this->_nb_mat)
	{
		this->_inventory[idx] = this->_inventory[idx + 1];
		idx++;
	}
	this->_inventory[idx] = NULL;
}


void Character::use(int idx, ICharacter& target){
	if (idx >= this->_nb_mat)
	{
		std::cout << "index exceed the capacity of <"<< this->_name<<"> inventory";
		std::cout << std::endl;
		return ;
	}
	this->_inventory[idx]->use(target);
}


int		Character::getNbmat()const{return(this->_nb_mat);}
