#include "humanB.hpp"

humanB::humanB(std::string name)
{
    this->_name = name;
    std::cout << "a humanB has been created" << std::endl;
    return;
}

humanB::~humanB(void)
{
    std::cout << this->_name << ": has been destroyed" << std::endl;
    return;
}

void humanB::setWeaponB(Weapon newWeapon)
{
    this->_weapon = &newWeapon;
    std::cout << _name << " weapon has been changed or set" << std::endl;
    return;
} 

Weapon    humanB::getWeaponB(void)
{
   return (this->_weapon->getType());
}

void humanB::attack(void)
{
//     if (!this->_weapon)
// 		std::cout << this->_name << " attacks with his bare hands" << std::endl;	
//     else
//         std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}