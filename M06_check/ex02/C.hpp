#ifndef C_H
#define C_H
#include <iostream>
#include <Base.hpp>

class C :public Base{
public:
    std::string getType()const;
};

#endif