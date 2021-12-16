#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {

public:

    Fixed(int i = 0);
    Fixed(const Fixed&);
    ~Fixed();
    Fixed &operator=(const Fixed&);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);

private:

    int _val;
    static const int _bits = 8;
};


#endif