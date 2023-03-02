#include "Harl.hpp"


int main( int ac, char **av )
{
	Harl		harl;
	std::string level;
	
	if (ac == 2)
	{
		level = av[1];
		harl.complain(level);
	}
	else
		std::cout << "Usage : ./harl \"<DEBUG> or <INFO> or <WARNING> or <ERROR>\""<< std::endl;
	return (0);
}