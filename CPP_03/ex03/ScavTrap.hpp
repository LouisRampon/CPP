#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
    public :
        ScavTrap(void);
        ScavTrap(std::string name);
		ScavTrap(const ScavTrap &src);
		ScavTrap & operator=(const ScavTrap &src);
		~ScavTrap(void);

		void	guardGate(void);

		protected :
			const int _HP;
			const int _EP;
			const int _AD;
};

#endif