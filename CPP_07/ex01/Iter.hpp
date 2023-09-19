#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string.h>

template< typename T >
void	iter(T const *tab, int size, void funct(T const &))
{
	for(int i = 0; i < size; i++)
		funct(tab[i]);
}

template< typename T >
void	iter(T *tab, int size, void funct(T &))
{
	for(int i = 0; i < size; i++)
		funct(tab[i]);
}

template< typename T >
void	printTab(T const &str)
{
	std::cout << str << " ";
}

#endif