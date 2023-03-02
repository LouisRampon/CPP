#ifndef humanA_H
# define humanA_H

# include "Weapon.hpp"
# include <iostream>

class humanA
{
    public:
        humanA(std::string name, Weapon &weapon);
        ~humanA(void);
        void setWeaponA(Weapon newWeapon);
        Weapon getWeaponA(void);
        void attack(void);

    private:
        std::string _name;
        Weapon *_weapon;
};

#endif