#include "Karen.hpp"

int str_error(int ret, std::string str)
{
    std::cout << str << std::endl << std::endl;
    return (ret);
}

int main(int ac, char **av)
{
    Karen karen;

    if (ac != 2)
        return (str_error(0, "Error: wrong argument"));
    if (karen.complain(av[1]) == false)
        return (str_error(0, "[ Probably complaining about insignificant problems ]"));
    return (0);
}
