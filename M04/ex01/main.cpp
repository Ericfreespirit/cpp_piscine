#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    int           N = 4;
    const Animal *animal = new Animal();
    const Animal *dog = new Dog();
    const Animal *cat = new Cat();
    const Animal *cpy_dog = dog;
    const Animal *cpy_cat = cat;
    const WrongAnimal *wrong_cat = new WrongCat();
    Animal **arr_animal = Animal::fill_animal(N);

    std::cout << std::endl;
    std::cout << "== Default Animal, Dog and Cat ==" << std::endl;
    animal->makeSound();
    animal->myBrain();
    dog->makeSound();
    dog->myBrain();
    cat->makeSound();
    cat->myBrain();
    std::cout << std::endl;

    std::cout << "== Wrong Cat == " << std::endl;
    wrong_cat->makeSound();
    std::cout << std::endl;

    std::cout << "== Deep copy Dog and Cat == " << std::endl;
    cpy_dog->makeSound();
    cpy_dog->myBrain();
    cpy_cat->makeSound();
    cpy_cat->myBrain();
    std::cout << std::endl;

    std::cout << "== In array of animal ==" << std::endl;
    for (int i = 0; i < N; i++){
       std::cout << "#" << i << " ";  
        arr_animal[i]->makeSound();
        arr_animal[i]->myBrain();
    }
    std::cout << std::endl;

     for (int i = 0; i < N; i++){
        delete arr_animal[i];
    }
    delete[] arr_animal;
    delete animal;
    delete dog;
    delete cat;
    delete wrong_cat;
}