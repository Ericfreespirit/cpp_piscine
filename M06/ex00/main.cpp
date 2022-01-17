#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <cstring>

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error: wrong arg" << std::endl;
        return (0);
    }
    int dec = atoi(av[1]);
    float fl = atof(av[1]);
    char c = static_cast<char>(dec);
    double d = static_cast<double>(fl);


    std::cout << "char: ";
    if (std::strcmp(av[1], "nan") == 0 ||std::strcmp(av[1], "nanf") == 0 )
        std::cout << "impossible" << std::endl;
    else if (dec < 33 || dec > 127)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'"<< c <<"'" << std::endl;
    
    std::cout <<"int: ";
    if (std::strcmp(av[1], "nan") == 0 ||std::strcmp(av[1], "nanf") == 0 )
        std::cout << "impossible" << std::endl;
    else
        std::cout << dec << std::endl;

    std::cout <<"float: ";
    if (std::strcmp(av[1], "nan") == 0 ||std::strcmp(av[1], "nanf") == 0 )
        std::cout << "nanf" << std::endl;
    else
        std::cout << std::fixed << std::setprecision(1)<<fl <<"f"<< std::endl;

    std::cout <<"double: ";
    if (std::strcmp(av[1], "nan") == 0 ||std::strcmp(av[1], "nanf") == 0 )
        std::cout << "nan" << std::endl;
    else
        std::cout << d << std::endl;

    return (0);
}