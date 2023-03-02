#include "Base.hpp"

int main(void)
{
	Base	*abc = generate();
	Base	*def = abc;
	Base	*isNull = new Base();
	
	// Basic test with an instance generate and send ref or pointer to identify the type //
	std::cout << std::endl;
	std::cout << "abc : ";
	identify(abc);			// pointer
	std::cout << std::endl;
	std::cout << "*abc : ";
	identify(*abc); 		// reference
	
	std::cout << std::endl;
	std::cout << "def : ";
	identify(def);

	std::cout << std::endl;
	std::cout << "isNull : ";
	identify(isNull);
	std::cout << std::endl;
	std::cout << "*isNull : ";
	identify(*isNull);

	delete (abc);
	delete(isNull);
	return (0);
}