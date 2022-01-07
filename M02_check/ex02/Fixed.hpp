#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {

public:

    Fixed();
    Fixed(const int i);
    Fixed(const float i);
    Fixed(const Fixed&);
    ~Fixed();
    
    // compar operator
    Fixed   &operator=(const Fixed&);
    bool    operator>(const Fixed&)const;
    bool    operator<(const Fixed&)const;
    bool    operator>=(const Fixed&)const;
    bool    operator<=(const Fixed&)const;
    bool    operator==(const Fixed&)const;
    bool    operator!=(const Fixed&)const;

    // arithmetic operator
    float   operator+(const Fixed&)const;
    float   operator-(const Fixed&)const;
    float   operator*(const Fixed&)const;
    float   operator/(const Fixed&)const;

    // iterate operator
    Fixed   &operator++(); //++a
    Fixed   &operator--(); //--a
    Fixed   operator++(int); //a++
    Fixed   operator--(int); //a--

    int     getRawBits(void) const;
    void    setRawBits(int const);
    int     toInt(void) const;
    float   toFloat(void) const;
    static  Fixed    &min(Fixed&, Fixed&);
    static  Fixed    &max(Fixed&, Fixed&);
    const static Fixed    &min(const Fixed&, const Fixed&);
    const static Fixed    &max(const Fixed&, const Fixed&);

private:

    int _val;
    static const int _bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif