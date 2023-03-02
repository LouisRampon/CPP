#ifndef DiamondTrap_H
# define DiamondTrap_H

# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    public :
        DiamondTrap(void);
        DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &src);
		DiamondTrap & operator=(const DiamondTrap &src);
		~DiamondTrap(void);

        void whoAmI(void);

    private :
        std::string _name;
};

#endif