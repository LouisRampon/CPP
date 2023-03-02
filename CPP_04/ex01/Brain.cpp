#include "Brain.hpp"

// SETTER AND GETTER //

void    Brain::setIdea(unsigned int i, std::string idea)
{
    if (i >= 100)
        std::cout << "brain not big enough sry" << std::endl;
    else
        this->_ideas[i] = idea;
}

std::string Brain::getIdea(unsigned int i)
{
      if (i >= 100)
      {
        std::cout << "brain is 0 to 99 try again" << std::endl;
        return ("");
      }
      return (this->_ideas[i]);
}

// CONSTRUCTORS AND DESTRUTOR //

Brain::Brain(void)
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

Brain	&Brain::operator=(const Brain &src)
{
    int i = 0;

    while (i < 100)
    {
        this->_ideas[i] = src._ideas[i];
        i++;
    }
	std::cout << "Brain copy assignment operator called" << std::endl;
	return (*this);
}

Brain::~Brain(void)
{
    std::cout << "Brain Destructor called" << std::endl;
    return ;
}
