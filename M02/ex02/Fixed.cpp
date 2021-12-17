#include "Fixed.hpp"

// Constructor
Fixed::Fixed():
_val(0)
{}

Fixed::Fixed(const int i):
_val(i << this->_bits)
{}

Fixed::Fixed(const float i):
_val(std::roundf(i * (1 << this->_bits)))
{}

Fixed::Fixed( Fixed &fixed) :
_val(fixed.getRawBits())
{
    *this = fixed;
}

// Destructor
Fixed::~Fixed()
{}

// Operator
// compar operator
Fixed   &Fixed::operator=(Fixed &fixed)
{
    this->setRawBits(fixed._val);
    return (*this);
}

bool     Fixed::operator>(Fixed &fixed) const
{
    return (this->_val > fixed._val);
}

bool     Fixed::operator<(Fixed &fixed) const
{
    return (this->_val < fixed._val);
}

bool     Fixed::operator>=(Fixed &fixed) const
{
    return (this->_val >= fixed._val);
}

bool     Fixed::operator<=(Fixed &fixed) const
{
    return (this->_val <= fixed._val);
}

bool     Fixed::operator==(Fixed &fixed) const
{
    return (this->_val == fixed._val);
}
bool     Fixed::operator!=(Fixed &fixed) const
{
    return (this->_val != fixed._val);
}

// arithmetic operator
float  Fixed::operator+(Fixed& fixed)const
{
    return (this->toFloat() + fixed.toFloat());
}

float  Fixed::operator-(Fixed& fixed) const
{
    return (this->toFloat() - fixed.toFloat());
}

float  Fixed::operator*(Fixed& fixed) const
{
    return (this->toFloat() * fixed.toFloat());

}

float  Fixed::operator/(Fixed& fixed) const
{
    return (this->toFloat() / fixed.toFloat());
}

// iterate operator
Fixed   &Fixed::operator++(void)
{
    this->_val++;
    return (*this);
}

Fixed  Fixed::operator++(int)
{
    Fixed tmp(*this);

    tmp._val++;
    return (tmp);
}

std::ostream &operator<<(std::ostream &out, Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}


// Method
int Fixed::getRawBits(void) const
{
    return(this->_val);
}

void    Fixed::setRawBits(int const raw)
{
    this->_val = raw;
}

int			Fixed::toInt(void) const 
{
    return (this->_val >> this->_bits);
}

float		Fixed::toFloat(void) const 
{
    return ((float)this->_val / (1 << this->_bits));
}