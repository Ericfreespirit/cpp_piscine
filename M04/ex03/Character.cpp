#include "Character.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

Character::Character(std:: string name): 
ICharacter(),
_nb_mat(0){
	this->_name = name;
		for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const Character &ref){
	for (int i = 0; i < ref._nb_mat; i++)
	{
		if (ref._inventory[i]->getType() == "ice")
			_inventory[i] = new Ice();
		else if (ref._inventory[i]->getType() == "cure")
			_inventory[i] = new Cure();
	}
	this->_nb_mat = ref._nb_mat;
  *this = ref;
}

Character::~Character(){};


Character &Character::operator=(const Character &ref){
	//deep copy of invertory
	this->_nb_mat = ref._nb_mat;
  return (*this);
}

std::string const &Character::getName()const{
	return (this->_name);
}


void Character::equip(AMateria* m){
	if (this->_nb_mat >= 4)
	{
		std::cout << "<"<<this->_name << "> invetory is full" << std::endl;
		return ;
	}
	this->_inventory[this->_nb_mat++] = m;
	// std::cout << m->getType();
	// std::cout << this->_inventory[0]->getType();
	// std::cout << std::endl;
};

void Character::unequip(int idx){};



void Character::use(int idx, ICharacter& target){
	t_use tab_use[] = {
		[0].str = "ice",
		[0].ptr = &Character::_spell_ice,
		[1].str = "cure",
		[1].ptr = &Character::_spell_cure
	};

	if (idx > this->_nb_mat)
	{
		std::cout << "index exceed the capacity of <"<< this->_name<<"> inventory";
		std::cout << std::endl;
		return ;
	}
	
	for (int i = 0; i < this->_nb_mat; i++){
		if(this->_inventory[idx]->getType() == tab_use[i].str)
		{
			(this->*(tab_use[i].ptr))(target);
			return ;
		}
	}

};


void	Character::_spell_ice(ICharacter &target)const{
	std::cout << "* shoots an ice bolt at "<< target.getName() <<" *";
	std::cout << std::endl;
}

void	Character::_spell_cure(ICharacter &target)const{
	std::cout << "* heals "<< target.getName()<<"'s wounds *";
	std::cout << std::endl;
}