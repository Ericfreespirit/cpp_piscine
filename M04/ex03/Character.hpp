#ifndef CHARACTER_H
#define CHARACTER_H
#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include <iostream>

class AMateria;

class Character : public ICharacter {
public:
    Character(std::string);
    Character(const Character &ref);
    virtual ~Character();

    Character &operator=(const Character &ref);

    std::string const &getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);

	private:
		AMateria *_inventory[4];
		int		_nb_mat;
		void	_spell_ice(ICharacter &target)const;
		void	_spell_cure(ICharacter &target)const;
};

typedef struct s_use{
	std::string str;
	void (Character::*ptr)(ICharacter &target) const;
} t_use;
#endif