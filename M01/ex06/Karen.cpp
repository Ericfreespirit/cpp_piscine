#include "Karen.hpp"


Karen::Karen()
{}

Karen::~Karen()
{}


bool    Karen::complain(std::string level)
{
    void    (Karen::*ptr)();
    bool    ret = false;
    t_all tab[4]
    {
        {"DEBUG"} ,
        {"INFO"},
        {"WARNING"},
        {"ERROR"}
    };

    for (int i = 0; i < 4;i++)
    {
        if (tab[i].level == level)
        {
            ret = true;
            switch (i)
            {
                case 0 : (this->_debug)();
                case 1 : (this->_info)();
                case 2 : (this->_warning)();
                case 3 : (this->_error)();
                default : break ;
            }
        }

    }
    return (ret);
}


void    Karen::_debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!";
    std::cout << std::endl;
    std::cout << std::endl;
}

void    Karen::_info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!";
    std::cout << std::endl;
    std::cout << std::endl;
}

void    Karen::_warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.";
    std::cout << std::endl;
    std::cout << std::endl;
}

void    Karen::_error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now.";
    std::cout << std::endl;
    std::cout << std::endl;
}