#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {

public:

    Fixed();
    Fixed(const int i);
    Fixed(const float i);
    Fixed( Fixed&);
    ~Fixed();
    
    // compar operator
    Fixed   &operator=(Fixed&);
    bool    operator>(Fixed&)const;
    bool    operator<(Fixed&)const;
    bool    operator>=(Fixed&)const;
    bool    operator<=(Fixed&)const;
    bool    operator==(Fixed&)const;
    bool    operator!=(Fixed&)const;

    // arithmetic operator
    float   operator+(Fixed&)const;
    float   operator-(Fixed&)const;
    float   operator*(Fixed&)const;
    float   operator/(Fixed&)const;

    // iterate operator
    Fixed   &operator++(); //++a
    Fixed   &operator--(); //--a
    Fixed   operator++(int); //a++
    Fixed   operator--(int); //a--

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    int     toInt(void) const;
    float   toFloat(void) const;
    static int     &min(int &, int &);
    static int     &max(int &, int &);
    //overload fixed point big
    //overload fixed point small

private:

    int _val;
    static const int _bits = 8;
};

std::ostream &operator<<(std::ostream &out,Fixed &fixed);

#endif