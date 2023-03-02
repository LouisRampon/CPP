#include "ClapTrap.hpp"



void ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoints == 0)
    {
        std::cout << this->_name <<  " doesn't have enough energy points to attack " << std::endl;
    }
    else if (this->_hitPoints == 0)
    {
        std::cout << this->_name <<  " doesn't have enough hit points to attack " << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target
				<< ", causing " << this->_attackDamage << " points of damage " << std::endl;
        this->_energyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints == 0)
    {
        std::cout << this->_name <<  " doesn't have enough hit points take more " << std::endl;
    }
    else
    {
        std::cout << this->_name <<  " take " << amount << " points of damage " << std::endl;
        this->_hitPoints -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints == 0)
        std::cout << this->_name <<  " doesn't have enough energy points to heal " << std::endl;
    else if (this->_hitPoints == 0)
        std::cout << this->_name <<  " is ded rip " << std::endl;
    else
    {
        if (this->_hitPoints >= 10)
            this->_hitPoints = 10;
        else
            this->_hitPoints += amount;
         std::cout << this->_name <<  " heal himself for " << amount << std::endl;
        this->_energyPoints--;
    }
}

// CONSTRUCTORS AND DESTRUTOR //

ClapTrap::ClapTrap(void)
{
    std::cout << "Constructor called" << std::endl;
    this->_name = "";
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Name constructor called" << std::endl;
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
    this->_name = src.getName();
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_attackDamage = src.getAttackDamage();
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

// SETTER AND GETTER //

void ClapTrap::setName(std::string name)
{
    this->_name = name;
}

std::string ClapTrap::getName(void) const
{
    return (this->_name);
}

void ClapTrap::setHitPoints(int nb)
{
    this->_hitPoints = nb;
}

int ClapTrap::getHitPoints(void) const
{
    return (this->_hitPoints);
}

void ClapTrap::setEnergyPoints(int nb)
{
    this->_energyPoints = nb;
}

int ClapTrap::getEnergyPoints(void) const
{
    return (this->_energyPoints);
}

void ClapTrap::setAttackDamage(int nb)
{
    this->_attackDamage = nb;
}

int ClapTrap::getAttackDamage(void) const
{
    return (this->_attackDamage);
}