#include "Fixed.hpp"

// Constructor
Fixed::Fixed():
_val(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i):
_val(i << this->_bits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float i):
_val(std::roundf(i * (1 << this->_bits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) :
_val(fixed.getRawBits())
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

// Destructor
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

// Operator
Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Assignement operator called" << std::endl;
    this->setRawBits(fixed.getRawBits());
    return (*this);
}

std::ostream &operator<<(std::ostream &out,const Fixed &fixed)
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