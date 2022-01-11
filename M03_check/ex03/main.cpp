#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int main()
{
    DiamondTrap diamond_eric("eric");

    diamond_eric.whoAmI();
    std::cout << "my hitpoints: " << diamond_eric.getHitpoints()  << std::endl;
    std::cout << "my energy points: " << diamond_eric.getEnergypoints() << std::endl;
    std::cout << "my attack damage: " << diamond_eric.getDammage() << std::endl;
    diamond_eric.attack("epouvantail");

    return (0);
}