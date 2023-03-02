#include "DiamondTrap.hpp"

void DiamondTrap::whoAmI(void)
{
    std::cout  << "My name is " << this->_name ;
	std::cout << " & ClapTrap's name is "<< ClapTrap::getName() << std::endl;
}

// CONSTRUCTORS AND DESTRUTOR //

DiamondTrap::DiamondTrap(void)
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    this->setName("bite");
    this->setHitPoints(FragTrap::_HP);
    this->setEnergyPoints(ScavTrap::_EP);
    this->setAttackDamage(FragTrap::_AD);
}

DiamondTrap::DiamondTrap(std::string name)
{
    std::cout << " DiamondTrap name constructor called" << std::endl;
    this->setName(name);
    this->setHitPoints(FragTrap::_HP);
    this->setEnergyPoints(ScavTrap::_EP);
    this->setAttackDamage(FragTrap::_AD);
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = src;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &src)
{
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
    this->setName(src.getName());
	this->setHitPoints(src.getHitPoints());
	this->setEnergyPoints(src.getEnergyPoints());
	this->setAttackDamage(src.getAttackDamage());
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap destructor called" << std::endl;
    return ;
}

