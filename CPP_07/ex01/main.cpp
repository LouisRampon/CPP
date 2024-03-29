#include "Iter.hpp"

void	toUpper(char &c)
{
	c = toupper(c);
	std::cout << c << ' ';
}

int	main(void)
{
	int			tab[] = {1, 2, 3, 4, 5, 6};
	char		charTab[] = {'h', 'e', 'l', 'l', 'o'};
	std::string	strTab[] = {"oiseau", "caillou", "ananas", "tonnerre", "cornichon"};
	
	::iter(tab, 6, printTab);
	std::cout << std::endl;
	::iter(strTab, 5, printTab);
	std::cout << std::endl;
	::iter(charTab, 5, printTab);
	std::cout << std::endl;
	::iter(charTab, 5, toUpper);
}