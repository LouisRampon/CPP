#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
    public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &src);
    ClapTrap & operator=(const ClapTrap &src);
    ~ClapTrap(void);

    void setName(std::string name);
    std::string getName(void) const;
    void setHitPoints(int nb);
    int getHitPoints(void) const;
    void setEnergyPoints(int nb);
    int getEnergyPoints(void) const;
    void setAttackDamage(int nb);
    int getAttackDamage(void) const;

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    private:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
};

#endif