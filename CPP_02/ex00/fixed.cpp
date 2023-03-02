#include "fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Constructor called" << std::endl;
    this->_nbr = 0;
}

Fixed::Fixed(const Fixed &source)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

Fixed	&Fixed::operator=(const Fixed &source)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(source.getRawBits());
	return (*this);
}

Fixed::~Fixed(void)
{
    return ;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits called" << std::endl;
    return(this->_nbr);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits called" << std::endl;
    this->_nbr = raw;
}
