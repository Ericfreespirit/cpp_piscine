#ifndef ITER_H
#define ITER_H
#include <iostream>

template <typename T>
void iter (T &arr, int len ,void (*func)(T)){
    for (int i = 0; i < len;i++){
        func(&arr[i]);
    }
};

template <typename U>
void    print(U *arr)
{
    std::cout << *arr << std::endl;
};


#endif