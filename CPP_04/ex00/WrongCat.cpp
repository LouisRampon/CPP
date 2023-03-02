#include "WrongCat.hpp"

void    WrongCat::makeSound(void) const
{
    std::cout << "Wrong cat miaou" << std::endl;
}

// CONSTRUCTORS AND DESTRUTOR //

WrongCat::WrongCat(void)
{
    this->_type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
    *this = src;
}

WrongCat	&WrongCat::operator=(const WrongCat &src)
{
    this->_type = src._type;
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat Destructor called" << std::endl;
    return ;
}
