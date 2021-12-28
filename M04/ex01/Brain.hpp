#ifndef BRAIN_H
#define BRAIN_H
#include <iostream>

class Brain {


public:
    Brain();
    Brain(const Brain &ref);
    ~Brain();

    const Brain &operator=(const Brain &ref);

protected:
    std::string _ideas[100];
};



#endif