#include "Karen.hpp"

Karen::Karen()
{}

Karen::~Karen()
{}

void    Karen::complain(std::string level)
{
    void    (Karen::*ptr)();
    t_all tab[4];

    tab[0].ptr = &Karen::_debug;
    tab[0].level = "DEBUG";

    tab[1].ptr = &Karen::_info;
    tab[1].level = "INFO";

    tab[2].ptr = &Karen::_warning;
    tab[2].level = "WARNING";

    tab[3].ptr = &Karen::_error;
    tab[3].level = "ERROR";

    for (int i = 0; i < 4;i++)
    {
        if (tab[i].level == level)
        {
            ptr = tab[i].ptr;
            (this->*ptr)();
        }
    }

}


void    Karen::_debug( void )
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!";
    std::cout << std::endl;
}

void    Karen::_info( void )
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!";
    std::cout << std::endl;
}

void    Karen::_warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.";
    std::cout << std::endl;
}

void    Karen::_error( void )
{
    std::cout << "This is unacceptable, I want to speak to the manager now.";
    std::cout << std::endl;
}