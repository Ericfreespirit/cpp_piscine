#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap_satan("Satan");
    ClapTrap clap_mini_cell("Mini_Cell");

    clap_satan.beRepaired(10);
    clap_satan.attack("Mini_Cell");
    clap_satan.takeDamage(100000);

    clap_mini_cell = clap_mini_cell;
    clap_mini_cell.takeDamage(1);
    return (0);
}