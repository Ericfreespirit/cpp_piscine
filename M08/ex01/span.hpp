#ifndef SPAN_H
#define SPAN_H
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits.h>


class Span {

public:
    Span(unsigned int n);
    Span(const Span &ref);
    ~Span();

    Span &operator=(const Span &ref);

    void addNumber(unsigned int n);
    void addRandNb();

    unsigned int shortestSpan();
    unsigned int longestSpan();

private:
    std::vector<unsigned int> _v;
};

#endif