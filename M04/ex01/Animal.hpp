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
    Animal &operator=(const Animal *ptr);

    std::string     getType(void)const;
    virtual void    makeSound(void)const;
    virtual void    myBrain()const;
    static Animal   **fill_animal(int);

protected:
    std::string     _type;
};

#endif