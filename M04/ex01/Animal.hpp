#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <Brain.hpp>

class Animal {

public:
    Animal();
    Animal(const Animal &ref);
    virtual ~Animal();

    Animal &operator=(const Animal &ref);

    std::string     getType(void)const;
    virtual void    makeSound(void)const;
    static Animal *fill_animal(int, const Animal*,const Animal*);

protected:
    std::string     _type;

};

#endif