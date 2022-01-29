#include "Array.hpp"

int main()
{
    Array <int> my_intArr(10);
    Array <char> my_charArr(2);

    std::cout << std::endl;
    std::cout << "== Test 1 ==" << std::endl;
    std::cout << std::endl;
    try {
         std::cout << "arr: {" << &my_intArr[0]<< "}" << std::endl;
        std::cout << "arr: {" << my_intArr[0]<< "}" << std::endl;
        std::cout << "arr: {" << &my_intArr[9]<< "}" << std::endl;
        std::cout << "arr: {" << my_intArr[9]<< "}" << std::endl;
        std::cout << my_intArr[100];
    }
    catch (std::exception &e){
        std::cerr << "Error: "<< e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "== Test 2 ==" << std::endl;
    std::cout << std::endl;
    try {
        std::cout << "arr: {"<< static_cast<void*> (&my_charArr[0]) << "}" << std::endl;
        std::cout << "arr: {"<< my_charArr[0] << "}" << std::endl;
        std::cout << "arr: {"<< static_cast<void*> (&my_charArr[1]) << "}" << std::endl;
        std::cout << "arr: {"<< my_charArr[1] << "}" << std::endl;        
        std::cout << my_charArr[3];
        std::cout << my_charArr[-1];
        std::cout << my_charArr[-100];
    }
    catch (std::exception &e){
        std::cerr << "Error: "<< e.what() << std::endl;
    }
    
    return (0);
}