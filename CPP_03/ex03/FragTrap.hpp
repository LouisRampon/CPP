#ifndef FragTrap_H
# define FragTrap_H

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
    public :
        FragTrap(void);
        FragTrap(std::string name);
		FragTrap(const FragTrap &src);
		FragTrap & operator=(const FragTrap &src);
		~FragTrap(void);

		void	highFivesGuys(void);

		protected :
			const int _HP;
			const int _EP;
			const int _AD;
};

#endif