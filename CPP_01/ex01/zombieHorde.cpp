#include "zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *multiZombie = new Zombie[N];
    int	i = 0;

	while (N > i)
	{
		multiZombie[i].setZombie(name);
		std::cout << name << " has been created" << std::endl;
		i++;
	}
	return(multiZombie);
}