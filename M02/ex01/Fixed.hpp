#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {

public:

    Fixed();
    Fixed(const int i);
    Fixed(const float i)
    Fixed(const Fixed&);
    ~Fixed();
    Fixed &operator=(const Fixed&);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    int     toInt(void) const;
    float   toFloat(void) const;

private:

    int _val;
    static const int _bits = 8;
};


#endif