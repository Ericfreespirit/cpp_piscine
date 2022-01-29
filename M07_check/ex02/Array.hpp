#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <exception>

template <typename T>
class Array{
public:
    class IndexTooHigh : public std::exception {
        public:
        const char *what() const throw(){
            return ("index too high compared to array size");
        };
    };
public:
    class IndexNeg : public std::exception {
        public:
        const char *what() const throw(){
            return ("index can't be negative");
        };
    };

public:

    Array(){
        this->_arr = new T[0]();
        this->_sz = 0;
    };
    Array(unsigned int n){
        this->_arr = new T[n]();
        this->_sz = n;
    };
    Array(const Array<T> &ref){
        *this = ref;
    };
    ~Array(){
            delete[] this->_arr;
    }
    Array<T> &operator=(const Array<T> &ref){
        this->_sz = ref._sz;
        this->_arr = new T[this->_sz];
        return(*this);
    };


    int size(){
        return (this->_sz);
    };

    T &operator[](int index){
        if (index + 1 > size())
            throw Array<T>::IndexTooHigh();
				else if (index < 0)
            throw Array<T>::IndexNeg();
        return (this->_arr[index]);
    };

private:
    T *_arr;
    int _sz;
     
};


#endif