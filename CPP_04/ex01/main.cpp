#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void)
{
	std::cout <<  "---- Tab dogs and cats ----" << std::endl;
	Animal	*tab_animal[4];
	int i;
	
	for(i = 0; i < 4; i++)
	{
		if (i % 2)
			tab_animal[i] = new Dog();
		else
			tab_animal[i] = new Cat();
	}
	i--;
	std::cout << std::endl;
	while (i >= 0)
	{
		std::cout <<  std::endl;
		tab_animal[i]->makeSound();
		std::cout << std::endl;
		delete tab_animal[i];
		std::cout << std::endl;
		i--;
	}
	std::cout << std::endl;
	std::cout <<  "---- Set an idea ----" << std::endl;
	Dog		Idefix;
	Dog		Dingo = Idefix;
	Cat		Garfield;
	
	std::cout << std::endl;
	Garfield.getBrain().setIdea(0, "Where is the lasagna ?");
	Idefix.getBrain().setIdea(0, "Where is Obe ?");
	Idefix.getBrain().setIdea(1, "Oh ! A squirrel !");
	Idefix.getBrain().setIdea(2, "Run run run run");
	Idefix.getBrain().setIdea(151, "I want to strangle Ordralfabétix");
	Dingo.getBrain().setIdea(0, "Hello you");
	std::cout << std::endl;
	std::cout <<  Garfield.getBrain().getIdea(0) << std::endl;
	std::cout <<  Idefix.getBrain().getIdea(0) << std::endl;
	std::cout <<  Idefix.getBrain().getIdea(1) << std::endl;
	std::cout <<  Idefix.getBrain().getIdea(2) << std::endl;
	std::cout <<  Idefix.getBrain().getIdea(125);
	std::cout << Idefix.getBrain().getIdea(3);
	std::cout <<  Idefix.getBrain().getIdea(-5);
	std::cout <<  Dingo.getBrain().getIdea(0) << std::endl;
	std::cout << std::endl;
	std::cout <<  "---- Deep copy test ----" << std::endl;
	Dog		basic;
	Dog 	tmp = basic;
	std::cout << std::endl;
	return (0);
}