#include "Weapon.hpp"
#include "humanA.hpp"
#include "humanB.hpp"

int main()
{
	{
		Weapon club = Weapon("Sword");
		humanA bob("Bob", club);
		bob.attack();
		club.setType("Knife");
		bob.attack();
	}
	std::cout << std::endl;
	{
		Weapon club = Weapon("Saber");
		humanB jim("Jim");
		jim.attack();
		jim.setWeaponB(club);
		jim.attack();
		club.setType("Gun");
		jim.attack();
	}
	return (0);
}