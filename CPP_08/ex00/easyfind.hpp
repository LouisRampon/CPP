#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <iostream>
#include <algorithm>
#include <exception>
#include <list>
#include <vector> 
#include <string.h>

class ValueNotFound : public std::exception
{
	public:
		virtual const char* what() const throw();
};

template <typename T>
void	easyfind(T container, int nb)
{
	typename T::iterator i;

	i = std::find(container.begin(), container.end(), nb);
	if (i == container.end())
		throw ValueNotFound();
	else
		std::cout << "Value " << nb << " has been found in the container" << std::endl;
}

const char* ValueNotFound::what(void) const throw()
{
	return("Exception : value hasn't been found in the containers");
}

#endif