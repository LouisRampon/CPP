#ifndef humanB_H
# define humanB_H

# include "Weapon.hpp"
# include <iostream>

class humanB
{
    public:
        humanB(std::string name);
        ~humanB(void);
        void setWeaponB(Weapon newWeapon);
        Weapon getWeaponB(void);
        void attack(void);

    private:
        std::string _name;
        Weapon *_weapon;
};

#endif
