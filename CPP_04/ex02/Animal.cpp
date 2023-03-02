#include "Animal.hpp"

// SETTER AND GETTER //

std::string   AAnimal::getType(void) const
{
    return (this->_type);
}

// CONSTRUCTORS AND DESTRUTOR //

AAnimal::AAnimal(void)
{
    this->_type = "AAnimal";
    std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
    *this = src;
}

AAnimal	&AAnimal::operator=(const AAnimal &src)
{
    this->_type = src.getType();
	std::cout << "AAnimal copy assignment operator called" << std::endl;
	return (*this);
}

AAnimal::~AAnimal(void)
{
    std::cout << "AAnimal destructor called" << std::endl;
    return ;
}

