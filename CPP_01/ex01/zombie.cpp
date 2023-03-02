#include "zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << "a zombie has been created" << std::endl;
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




