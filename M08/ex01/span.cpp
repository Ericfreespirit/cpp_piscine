#include "span.hpp"

Span::Span(unsigned int n){
    this->_v.reserve(n);
}

Span::Span(const Span &ref){
    *this = ref;
}

Span &Span::operator=(const Span &ref){
    this->_v.reserve(ref._v.size());
    for (size_t i = 0; i < ref._v.size(); i++){
        _v[i] = ref._v[i];
    }
    return (*this);
}

Span::~Span(){};

void Span::addRandNb(){
    srand(time(NULL));
    for (size_t i = 0; i < this->_v.capacity(); i++)
        this->_v.push_back(rand () % INT_MAX);
}

void Span::addNumber(unsigned int n){
    if (std::find(this->_v.begin(), this->_v.end(), n) != this->_v.end())
        throw std::runtime_error("Error: element already exist in vector");
    this->_v.push_back(n);
}

unsigned int Span::shortestSpan(){
    std::vector<unsigned int> v2;
    unsigned int tmp = *max_element(this->_v.begin(), this->_v.end());
    if (this->_v.empty() || this->_v.size() == 1)
        throw std::runtime_error("Error: vector wrong size");
    for(size_t i = 0;i < this->_v.size(); i++){
        v2.push_back(this->_v[i]);
    }
    std::sort (v2.begin(), v2.end());
    for(size_t i = 0; i < this->_v.size(); i++){
        if (i + 1 < this->_v.size() && v2[i + 1] - v2[i] < tmp)
            tmp = v2[i + 1] - v2[i];
    }
    return(tmp);
}

unsigned int Span::longestSpan(){
    std::vector<unsigned int>::iterator it;
    if (this->_v.empty() || this->_v.size() == 1)
        throw std::runtime_error("Error: vector wrong size");
    unsigned int val1 = *min_element(this->_v.begin(), this->_v.end());
    unsigned int val2 = *max_element(this->_v.begin(), this->_v.end());
    return(val2 - val1);
}
