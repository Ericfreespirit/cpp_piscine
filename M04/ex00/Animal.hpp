#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {

public:
    Animal();
    ~Animal();

    void    makeSound(void)const;

protected:
    std::string     type;

}


#endif