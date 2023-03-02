#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void)
{
	AAnimal	*Garfield = new Cat();
	//AAnimal	*animal = new AAnimal(); // cannot instantiate an Animal cause it's class astract
	Dog		Idefix;
	
	std::cout << std::endl;
	std::cout << Garfield->getType() << std::endl;
	Garfield->makeSound();
	std::cout << std::endl;
	Idefix.getBrain().setIdea(0, "Where is Obe ?");
	Idefix.getBrain().setIdea(1, "Oh ! A squirrel !");
	Idefix.getBrain().setIdea(2, "Run run run run");
	Idefix.getBrain().setIdea(151, "I want to strangle Ordralfabétix");
	std::cout << std::endl;
	std::cout << Idefix.getBrain().getIdea(0) << std::endl;
	std::cout << Idefix.getBrain().getIdea(1) << std::endl;
	std::cout << Idefix.getBrain().getIdea(2) << std::endl;
	std::cout << Idefix.getBrain().getIdea(125);

	std::cout << std::endl;
	delete Garfield;
	return (0);
}