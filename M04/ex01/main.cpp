#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

    /*
        Return an N lenght array of class composed of class c1 and class c2
        static  Animal *fill_animal(int N, const class c1, const class c2);
        #protect int N
    */

int main()
{
    int           N = 4;
    const Animal *dog = new Dog();
    const Animal *cat = new Cat();
    // const Animal *cpy_dog = dog;
    // const Animal *cpy_cat = cat;
    // const WrongAnimal *wrong_cat = new WrongCat();
    Animal *animal = Animal::fill_animal(N, dog, cat);
/*
    std::cout << "Default Dog and Cat" << std::endl;
    dog->showAll();
    cat->showAll();
    dog->makeSound();
    cat->makeSound();

    std::cout << "Wrong Cat" << std::endl;
    wrong_cat->showAll();
    wrong_cat->makeSound();

    std::cout << "Deep copy Dog and Cat" << std::endl;
    cpy_dog->showAll();
    cpy_cat->showAll();
    cpy_dog->makeSound();
    cpy_cat->makeSound();

*/
    std::cout << "In array of animal" << std::endl;
    for (int i = 0; i < N; i++){
       std::cout << "# " << i;  
        animal[i].makeSound();
    }


    // for (int i = 0; i < N; i++){
    //     delete animal[i]; // delete as Cat and Dog
    // }
    delete[] animal;

    delete dog;
    delete cat;
    // delete wrong_cat;
}