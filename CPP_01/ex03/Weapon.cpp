#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->_type = type;
    std::cout << this->_type << " weapon has been created" << std::endl;
    return;
}

Weapon::~Weapon(void)
{
    std::cout << this->_type << " weapon has been destroyed" << std::endl;
    return ;
}

void Weapon::setType(std::string type)
{
    this->_type = type;
    std::cout << type << " weapon has been changed to " << this->_type << std::endl;
}

std::string &Weapon::getType(void)
{
    return (this->_type);
}
