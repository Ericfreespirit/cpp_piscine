#ifndef EASY_H
#define EASY_H
#include <iostream>
#include <exception>
#include <vector>

template <typename T>
int easyfind(T &ct, int oc){
    typename T::iterator it;
    int i = 0;

    for (it = ct.begin();it != ct.end(); it++){
        if (*it == oc)
            return (i);
        i++;
    }
    throw std::invalid_argument("neither occurence find");
}

#endif