#include "Dog.hpp"

void    Dog::makeSound(void) const
{
    std::cout << "wouaf" << std::endl;
}

// CONSTRUCTORS AND DESTRUTOR //

Dog::Dog(void)
{
    this->_type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &src)
{
	std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

Dog	&Dog::operator=(const Dog &src)
{
    this->_type = src._type;
	std::cout << "Dog copy assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    return ;
}