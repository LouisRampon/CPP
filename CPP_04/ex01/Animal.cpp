#include "Animal.hpp"

void	Animal::makeSound(void) const
{
	std::cout << "animals sounds" << std::endl;
	return;
}

// SETTER AND GETTER //

std::string   Animal::getType(void) const
{
    return (this->_type);
}

// CONSTRUCTORS AND DESTRUTOR //

Animal::Animal(void)
{
    this->_type = "Animal";
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal	&Animal::operator=(const Animal &src)
{
    this->_type = src.getType();
	std::cout << "Animal copy assignment operator called" << std::endl;
	return (*this);
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
    return ;
}

