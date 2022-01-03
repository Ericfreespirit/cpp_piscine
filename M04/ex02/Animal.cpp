#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

/*
    Constructor / Destructor
*/
Animal::Animal() :
_type("Animal"){
    std::cout << "Default Constructor Animal create" << std::endl;
}

Animal::Animal(const Animal &ref):
_type(ref._type){
    std::cout << "Copied Constructor " << this->_type << " create" << std::endl;
}

Animal::~Animal(){
    std::cout << "Destructor Animal delete" << std::endl;
}

/*
    Operator
*/
Animal &Animal::operator=(const Animal &ref){
    this->_type = ref._type;
    return (*this);
}

Animal &Animal::operator=(const Animal *ptr){
    this->_type = ptr->_type;
    return (*this);
}

/*
    Member function
*/
std::string     Animal::getType()const{
    return(this->_type);
}

void            Animal::makeSound() const{
    std::cout << "<" << this->_type << "> *no sound*" << std::endl; 
}

Animal **Animal::fill_animal(int n){
    int i = 0;
    Animal **arr = new Animal*[n];

    while (i < n)
    {
        if (i < n / 2)
        {
            arr[i] = new Dog();
        }
        else 
            arr[i] = new Cat();
        i++;
    }
    return (arr);
}
