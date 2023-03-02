#include "WrongAnimal.hpp"

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimals sounds" << std::endl;
	return;
}

// SETTER AND GETTER //

std::string   WrongAnimal::getType(void) const
{
    return (this->_type);
}

// CONSTRUCTORS AND DESTRUTOR //

WrongAnimal::WrongAnimal(void)
{
    this->_type = "WrongAnimal";
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &src)
{
    this->_type = src.getType();
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called" << std::endl;
    return ;
}
