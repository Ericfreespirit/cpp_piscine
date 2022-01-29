#include "iter.hpp"
#include <iostream>

int main()
{
    std::string arr[4] = {"a","b", "c","d"};
    int tab[4] = {1,2,3,4};

    iter(arr, 4, &print);
    iter(tab, 4, &print);
    return (0);
}