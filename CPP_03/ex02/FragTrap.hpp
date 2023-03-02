#ifndef FragTrap_H
# define FragTrap_H

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap(void);
        FragTrap(std::string name);
		FragTrap(const FragTrap &src);
		FragTrap & operator=(const FragTrap &src);
		~FragTrap(void);

		void	highFivesGuys(void);
};

#endif