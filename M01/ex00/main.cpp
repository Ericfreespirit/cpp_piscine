#include "Zombie.hpp"


int main (int ac, char **av)
{
    Zombie* ptr = newZombie("Rick"); // heap
    randomChump("Negan"); //stack

    ptr->announce();
    delete ptr;
    return (0);
}