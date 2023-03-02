#include "Cat.hpp"

void    Cat::makeSound(void) const
{
    std::cout << "miaou" << std::endl;
}

// CONSTRUCTORS AND DESTRUTOR //

Cat::Cat(void)
{
    this->_type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &src)
{
	std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

Cat	&Cat::operator=(const Cat &src)
{
    this->_type = src._type;
	std::cout << "Cat copy assignment operator called" << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
    std::cout << "Cat Destructor called" << std::endl;
    return ;
}
