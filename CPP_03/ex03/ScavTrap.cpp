#include "ScavTrap.hpp"

void	ScavTrap::guardGate(void)
{
    std::cout << this->getName() << " has enter Guard mode" << std::endl;
}

// CONSTRUCTORS AND DESTRUTOR //

ScavTrap::ScavTrap(void) : _HP(100), _EP(50), _AD(20)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->setName("bite");
    this->setHitPoints(this->_HP);
    this->setEnergyPoints(this->_EP);
    this->setAttackDamage(this->_AD);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), _HP(100), _EP(50), _AD(20)
{
    std::cout << " ScavTrap name constructor called" << std::endl;
    this->setName(name);
    this->setHitPoints(this->_HP);
    this->setEnergyPoints(this->_EP);
    this->setAttackDamage(this->_AD);
}

ScavTrap::ScavTrap(const ScavTrap &src) : _HP(100), _EP(50), _AD(20)
{
    *this = src;
    std::cout << "ScavTrap copy constructor called" << std::endl;
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