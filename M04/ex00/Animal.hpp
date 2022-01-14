#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
class Animal {

public:
    Animal();
    Animal(const Animal &ref);
    virtual ~Animal();

    Animal &operator=(const Animal &ref);

    std::string     getType(void)const;
    virtual void            makeSound(void)const;

protected:
    std::string     _type;

};

#endif