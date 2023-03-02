#include "fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Constructor called" << std::endl;
    this->_nbr = 0;
}

Fixed::Fixed(const int newNbr)
{
    std::cout << "Constructor with int called" << std::endl;
    this->_nbr =(roundf(newNbr * (1 << this->_bits)));
}

Fixed::Fixed(const float newNbr)
{
    std::cout << "Constructor with float called" << std::endl;
    this->_nbr = (roundf(newNbr * (1 << this->_bits)));
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
    std::cout << "Destrutor Called" << std::endl;
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

float Fixed::toFloat() const
{
    float value;
    value = (float)this->_nbr / (1 << this->_bits);
    return(value);
}

int Fixed::toInt() const
{
    return(roundf(this->_nbr / (1 << this->_bits)));
}

std::ostream &operator<<(std::ostream &stream, const Fixed &source)
{
	stream << source.toFloat();
	return (stream);
}

