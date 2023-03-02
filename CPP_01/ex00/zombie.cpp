#include "zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << name << ": has been created" << std::endl;
    return;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << ": has been destroyed" << std::endl;
    return;
}

void Zombie::setZombie(std::string name)
{
    this->_name = name;
    std::cout << name << ": has change is name" << std::endl;
    return;
}

void    Zombie::getZombie(void)
{
   return ;
}

void Zombie::announce(void)
{
    std::cout << this->_name;
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}




