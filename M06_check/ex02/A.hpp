#ifndef A_H
#define A_H
#include <iostream>
#include <Base.hpp>

class A :public Base{
public:
    std::string getType()const;
};

#endif