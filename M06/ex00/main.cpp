#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <cstring>
#include <string>
#include <cmath>
#include <limits.h>
#include <math.h>


int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error: wrong arg" << std::endl;
        return (0);
    }
    double convert = atof(av[1]);

    std::cout << "char: ";
    if (std::strcmp(av[1], "nan") == 0 ||std::strcmp(av[1], "nanf") == 0 ||
        convert > CHAR_MAX || convert < CHAR_MIN)
        std::cout << "impossible" << std::endl;
    else if (convert < 33 || convert > 127)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'"<< static_cast<char>(convert) <<"'" << std::endl;
    
    std::cout <<"int: ";
    if (std::strcmp(av[1], "nan") == 0 ||std::strcmp(av[1], "nanf") == 0 || 
        convert > INT_MAX || convert < INT_MIN)
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(convert) << std::endl;

    std::cout <<"float: ";
    if (std::strcmp(av[1], "nan") == 0 ||std::strcmp(av[1], "nanf") == 0 )
        std::cout << "nanf" << std::endl;
    else
        std::cout << std::fixed << std::setprecision(1)<<static_cast<float>(convert) <<"f"<< std::endl;

    std::cout <<"double: ";
    if (std::strcmp(av[1], "nan") == 0 ||std::strcmp(av[1], "nanf") == 0 )
        std::cout << "nan" << std::endl;
    else
        std::cout << convert << std::endl;

    return (0);
}