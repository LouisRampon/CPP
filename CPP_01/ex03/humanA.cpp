#include "humanA.hpp"

humanA::humanA( std::string name, Weapon &weapon ): _weapon(&weapon)
{
    this->_name = name;
    std::cout << "a humanA has been created" << std::endl;
    return;
}

humanA::~humanA(void)
{
    std::cout << this->_name << ": has been destroyed" << std::endl;
    return;
}

void humanA::setWeaponA(Weapon newWeapon)
{
    this->_weapon = &newWeapon;
    std::cout << _name << " weapon has been changed or set" << std::endl;
    return;
} 

Weapon    humanA::getWeaponA(void)
{
   return (this->_weapon->getType());
}

void humanA::attack(void)
{
    if (!this->_weapon)
		std::cout << this->_name << " attacks with his bare hands" << std::endl;	
    else
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}