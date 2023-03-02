#include "Dog.hpp"

void    Dog::makeSound(void) const
{
    std::cout << "woauf" << std::endl;
}

// SETTER AND GETTER //

Brain   &Dog::getBrain(void)
{
    return (*this->_brain);
}

// CONSTRUCTORS AND DESTRUTOR //

Dog::Dog(void)
{
    this->_type = "Dog";
    this->_brain = new Brain();
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
    this->_brain = new Brain();
    *(this->_brain) = *(src._brain);
	std::cout << "Dog copy assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
    delete this->_brain;
    std::cout << "Dog Destructor called" << std::endl;
    return ;
}