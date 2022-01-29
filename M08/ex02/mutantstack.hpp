#ifndef MUTANT_H
#define MUTANT_H
#include <iostream>
#include <deque>
#include <stack>

template<typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container> {
public:
		// typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename Container::iterator iterator;
    iterator begin(){
        return(this->c.begin());
    };
    iterator end(){
        return (this->c.end());
    };
};

#endif