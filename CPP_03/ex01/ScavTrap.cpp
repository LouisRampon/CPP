#include "ScavTrap.hpp"

void	ScavTrap::guardGate(void)
{
    std::cout << this->getName() << " has enter Guard mode" << std::endl;
}

// CONSTRUCTORS AND DESTRUTOR //

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->setName("bite");
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << " ScavTrap name constructor called" << std::endl;
    this->setName(name);
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = src;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    this->setName(src.getName());
	this->setHitPoints(src.getHitPoints());
	this->setEnergyPoints(src.getEnergyPoints());
	this->setAttackDamage(src.getAttackDamage());
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;
    return ;
}