#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed b(5.3f);

    // std::cout << "a = " << a << std::endl;
    // std::cout << "b = " << b << std::endl;
    // std::cout << (a > b) << std::endl;
    // std::cout << (a < b) << std::endl;
    // std::cout << (a <= a) << std::endl;
    // std::cout << (a >= a) << std::endl;
    // std::cout << (a == b) << std::endl;
    // std::cout << (a != b) << std::endl;

	// std::cout << a + b << std::endl;
    // std::cout << (a - b) << std::endl;
    // std::cout << (a * b) << std::endl;
    // std::cout << (a / b) << std::endl;

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;


    return 0;
}