#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main()
{
    ScavTrap scav_red("Red");
    ScavTrap scav_blue("Blue");

    scav_red.attack("Blue");
    scav_red.guardGate();
    scav_blue = scav_red;
    scav_blue.guardGate();
    return (0);
}