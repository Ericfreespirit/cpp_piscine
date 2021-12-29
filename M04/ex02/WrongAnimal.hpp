#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H
#include <iostream>

class WrongAnimal {

public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &ref);
    ~WrongAnimal();

    WrongAnimal &operator=(const WrongAnimal &ref);

    std::string     getType(void)const;
    void            makeSound(void)const;

protected:
    std::string     _type;

};


#endif