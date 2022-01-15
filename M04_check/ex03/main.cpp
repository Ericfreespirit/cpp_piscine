#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int main()
{
    // std::cout << std::endl;
    // std::cout << "== TEST per default ==" << std::endl;
    // std::cout << std::endl;
    // IMateriaSource *src = new MateriaSource();
    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());
    // src->learnMateria(new Cure());
    // src->learnMateria(new Cure());
    // src->learnMateria(new Cure());

    // ICharacter* me = new Character("me");
    AMateria* tmp;
    // AMateria* tmp2;

    // tmp2 = src->createMateria("ice");
    // me->equip(tmp2);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);

    // ICharacter* bob = new Character("bob");
    // me->use(0, *bob);
    // me->use(1, *bob);
    // me->use(2, *bob);
    // me->use(3, *bob);
    // me->use(4, *bob);

    // me->unequip(0);
    // me->use(0, *bob);
    // me->use(1, *bob);
    // me->use(2, *bob);

    std::cout << std::endl;
    std::cout << "== TEST deep copy Character ==" << std::endl;
    std::cout << std::endl;

    Character *leo = new Character("leo");
    IMateriaSource *src2 = new MateriaSource();
    src2->learnMateria(new Ice());
    src2->learnMateria(new Cure());

    tmp = src2->createMateria("ice");
    leo->equip(tmp);
    tmp = src2->createMateria("cure");
    leo->equip(tmp);
    leo->use(0, *leo);
    leo->use(1, *leo);

    Character *tom = new Character(*leo);
    leo = tom;
    tom->use(0, *tom);
    tom->use(1, *tom);
    leo->use(0, *leo);
    leo->use(1, *leo);
    delete tom;
    delete leo;
    delete src2;
    // delete tmp2;
    // delete bob;
    // delete me;
    // delete src;
    return (0);
}