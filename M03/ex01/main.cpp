#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main()
{
    ScavTrap scav_red("Red");
    scav_red.attack("Blue");
    scav_red.guardGate();
    return (0);
}