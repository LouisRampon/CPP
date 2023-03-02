#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie
{
    public:
        Zombie(void);
        ~Zombie(void);
        void setZombie(std::string name);
        void getZombie(void);
        void announce(void);

    private:
        std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
