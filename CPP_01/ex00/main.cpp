#include "zombie.hpp"

int	main( void )
{
	Zombie	*zombieBob = newZombie("Bob");

	zombieBob->announce();
	randomChump("Jim");
	delete zombieBob;
}