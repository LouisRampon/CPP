#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "--------------- Subject test ----------------"<< std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	delete(i);
	delete(j);
	delete(meta);
	std::cout << std::endl;
	std::cout << "--------------- My tests ----------------"<< std::endl;
	Animal		Titi;
	Dog			Idefix;
	Cat			Garfield;
	WrongAnimal	Coffee;
	WrongCat	Grosminet;
	Dog			cpy_Idefix(Idefix);

	std::cout << std::endl;
	std::cout << Titi.getType() << std::endl;
	Titi.makeSound();
	std::cout << std::endl;
	std::cout << Idefix.getType() << std::endl;
	Idefix.makeSound();
	std::cout << std::endl;
	std::cout << Garfield.getType() << std::endl;
	Garfield.makeSound();
	std::cout << std::endl;
	std::cout << Coffee.getType() << std::endl;
	Coffee.makeSound();
	std::cout << std::endl;
	std::cout << Grosminet.getType() << std::endl;
	Grosminet.makeSound();
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << cpy_Idefix.getType() << std::endl;
	Idefix.makeSound();
	std::cout << std::endl;
	return (0);
}