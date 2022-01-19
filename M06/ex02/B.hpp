#ifndef B_H
#define B_H
#include <iostream>
#include <Base.hpp>

class B :public Base{
public:
    std::string getType()const;
};

#endif