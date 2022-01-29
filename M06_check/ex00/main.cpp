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

		// Char converion
    std::cout << "char: ";
    if (convert > CHAR_MAX || convert < CHAR_MIN || !std::isfinite(convert)) // std::isfinite
        std::cout << "impossible" << std::endl;
    else if (convert < 33 || convert > 127)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'"<< static_cast<char>(convert) <<"'" << std::endl;
		
		// Int converion
    std::cout <<"int: ";
    if (convert > INT_MAX || convert < INT_MIN || !std::isfinite(convert)) // std::isfinite
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(convert) << std::endl;

		// Float converion
    std::cout <<"float: ";
    if (!std::isfinite(convert))
        std::cout << "nanf" << std::endl;
    else
        std::cout << std::fixed << std::setprecision(1)<<static_cast<float>(convert) <<"f"<< std::endl;

		//Double conversion
    std::cout <<"double: ";
    if (!std::isfinite(convert))
        std::cout << "nan" << std::endl;
    else
        std::cout << convert << std::endl;

    return (0);
}