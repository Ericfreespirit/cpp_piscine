#include "span.hpp"

int main()
{
    Span sp(5);
    Span sp2(15000);
    Span sp3(0);


    std::cout <<" == Test 1 ==" <<std::endl;
    try {
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    std::cout <<" == Test 2 ==" <<std::endl;
    try {
        sp2.addRandNb();
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
		std::cout <<" == Test 3 ==" <<std::endl;
    try {
        std::cout << sp3.shortestSpan() << std::endl;
        std::cout << sp3.longestSpan() << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    return (0);
}