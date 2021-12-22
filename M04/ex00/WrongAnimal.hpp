#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

class WrongAnimal {

public:
    WrongAnimal();
    ~WrongAnimal();

    void    makeSound(void)const;

protected:
    std::string     type;

}


#endif