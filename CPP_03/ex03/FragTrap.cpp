#include "FragTrap.hpp"

void	FragTrap::highFivesGuys(void)
{
    std::cout << this->getName() << " is asking you for a high five don't let hin hanging" << std::endl;
}

// CONSTRUCTORS AND DESTRUTOR //

FragTrap::FragTrap(void) : _HP(100), _EP(100), _AD(30)
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->setName("bite");
    this->setHitPoints(this->_HP);
    this->setEnergyPoints(this->_EP);
    this->setAttackDamage(this->_AD);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name), _HP(100), _EP(100), _AD(30)
{
    std::cout << " FragTrap name constructor called" << std::endl;
    this->setName(name);
    this->setHitPoints(this->_HP);
    this->setEnergyPoints(this->_EP);
    this->setAttackDamage(this->_AD);
}

FragTrap::FragTrap(const FragTrap &src) : _HP(100), _EP(100), _AD(30)
{
    *this = src;
    std::cout << "FragTrap copy constructor called" << std::endl;
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