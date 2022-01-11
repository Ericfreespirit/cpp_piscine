#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main ()
{
    const Animal* animal = new Animal();
    const Animal* dog = new Dog();// inheritance from Animal class
    const Animal* cat = new Cat();// inheritance from Animal class

    const WrongAnimal* wrong_animal = new WrongAnimal(); //inheritance from WrongAnimal class
    const WrongAnimal* wrong_cat = new WrongCat();//inheritance from WrongAnimal class

    std::cout << animal->getType() << " " << std::endl;
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    dog->makeSound(); 
    cat->makeSound();
    animal->makeSound();


    std::cout << wrong_animal->getType() << " " << std::endl;
    std::cout << wrong_cat->getType() << " " << std::endl;
    wrong_animal->makeSound();// weird sound
    wrong_cat->makeSound(); // weird sound from wrong_animal
    


    delete animal;
    delete dog;
    delete cat;
    delete wrong_animal;
    delete wrong_cat;
}