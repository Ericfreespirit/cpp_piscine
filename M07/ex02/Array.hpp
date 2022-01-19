#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template <typename T>
class Array{

public:
    Array(){};
    Array(unsigned int n){
        for(int i = 0;i < n; i++){
            T *a = new T();
            std::cout << *a << std::end;
        }
    };
    Array(const Array &ref){
        *this = ref;
    };

    Array &operator=(const Array *ref){

    };


#endif