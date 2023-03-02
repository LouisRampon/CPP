#include "Cat.hpp"

void    Cat::makeSound(void) const
{
    std::cout << "miaou" << std::endl;
}

// SETTER AND GETTER //

Brain   &Cat::getBrain(void)
{
    return (*this->_brain);
}

// CONSTRUCTORS AND DESTRUTOR //

Cat::Cat(void)
{
    this->_type = "Cat";
    this->_brain = new Brain();
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
    this->_brain = new Brain();
    this->_brain = src._brain;
	std::cout << "Cat copy assignment operator called" << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
    delete this->_brain;
    std::cout << "Cat Destructor called" << std::endl;
    return ;
}
