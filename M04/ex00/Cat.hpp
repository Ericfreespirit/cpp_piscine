#ifndef CAT_H
#define CAT_H
#include "Animal.hpp"

class Cat : public Animal{

public:
    Cat();
    Cat(const Cat &ref);
    ~Cat();

    Cat &operator=(const Cat &ref);

    void    makeSound(void)const;
};

#endif