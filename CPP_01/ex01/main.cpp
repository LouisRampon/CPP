#include "zombie.hpp"

int main( void )
{
	int	i;
	int N = 5;
	Zombie* zombie = zombieHorde(N, "Bite");
	
	i = 0;
	while(i < N)
	{
		zombie[i].announce();
		i++;
	}
	delete[] zombie;
	return (0);
}