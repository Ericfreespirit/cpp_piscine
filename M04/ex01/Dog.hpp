#ifndef DOG_H
#define DOG_H
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{

public:
    Dog();
    Dog(const Dog &ref);
    ~Dog();

    Dog &operator=(const Dog &ref);
    void    makeSound(void)const;
    virtual int    getIdeasLen(void)const;
    void    myBrain(void)const;

private:
    Brain *_brain;
};

#endif