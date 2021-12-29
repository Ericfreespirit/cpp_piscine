#include "IMateriaSource.hpp"
#include <iostream>

IMateriaSource::IMateriaSource(){};

IMateriaSource::IMateriaSource(const IMateriaSource &ref){
    *this = ref;
}

IMateriaSource::~IMateriaSource(){};


IMateriaSource &IMateriaSource::operator=(const IMateriaSource &ref){
    return (*this);
}