#include "Zombie.hpp"


int main (int ac, char **av)
{
    int n = 3;
    Zombie *horde = zombieHorde(n, "rôdeurs");

    for (int i = 0; i < n; i++){
        horde[i].announce();
    }
    delete [] horde;
    return (0);
}