#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Default Constructor Brain create" << std::endl;
}

Brain::Brain(const Brain &ref){
    *this = ref;
    std::cout << "Copied Constructor Brain create" << std::endl;
}

Brain::~Brain(){
    std::cout << "Destructor Brain delete" << std::endl;
}

const Brain &Brain::operator=(const Brain &ref){
    *this = ref;
    return (*this);
}