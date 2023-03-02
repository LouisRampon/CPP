#include "FragTrap.hpp"

void	FragTrap::highFivesGuys(void)
{
    std::cout << this->getName() << " is asking you for a high five don't let hin hanging" << std::endl;
}

// CONSTRUCTORS AND DESTRUTOR //

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->setName("bite");
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
}

FragTrap::FragTrap(std::string name)
{
    std::cout << " FragTrap name constructor called" << std::endl;
    this->setName(name);
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
    *this = src;
}

FragTrap	&FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
    this->setName(src.getName());
	this->setHitPoints(src.getHitPoints());
	this->setEnergyPoints(src.getEnergyPoints());
	this->setAttackDamage(src.getAttackDamage());
	return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
    return ;
}