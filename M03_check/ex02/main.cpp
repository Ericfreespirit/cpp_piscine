#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main()
{
    FragTrap frag_0("zero");
    FragTrap frag_1;
    FragTrap frag_2(frag_0);

    frag_1 = frag_0;

    frag_0.highFivesGuy();
    return (0);
}