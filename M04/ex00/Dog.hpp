#ifndef DOG_H
#define DOG_H
#include "Animal.hpp"

class Dog : public Animal{

public:
    Dog();
    Dog(const Dog &ref);
    ~Dog();

    Dog &operator=(const Dog &ref);

    void    makeSound(void)const;
};

#endif