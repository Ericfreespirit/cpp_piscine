#include "easyfind.hpp"

int main()
{
    std::vector<int> vect;
    vect.push_back(1);
    vect.push_back(4);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(4);
    try {
        std::cout << easyfind(vect, 4) << std::endl;
        std::cout << easyfind(vect, 3) << std::endl;
        std::cout << easyfind(vect, 666) << std::endl;
    }
    catch (std::invalid_argument &e){
        std::cerr << e.what() << std::endl;
    }
    return (0);
}