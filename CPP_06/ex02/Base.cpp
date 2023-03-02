#include "Base.hpp"

Base* generate() 
{
    std::srand(std::time(NULL));
    
    int random = std::rand() % 3;
    
    switch (random) 
	{
        case 0:
            return new A();
        case 1:
            return new B();
        default:
            return new C();
    }
}

void identify(Base* p) 
{
    if (dynamic_cast<A*>(p))
        std::cout << "it's A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "it's B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "it's C" << std::endl;
	else
		std::cout << "it's Nothing" << std::endl;
}

void	identify(Base& p)
{	
	try
	{
		A &refA = dynamic_cast<A&>(p);
		std::cout << "it's A " << std::endl;
		(void)refA;
		return;
	}
	catch(const std::exception& e) {}
	try
	{
		B &refB = dynamic_cast<B&>(p);
		std::cout << "it's B" << std::endl;
		(void)refB;
		return;
	}
	catch(const std::exception& e) {}
	try
	{
		C &refC = dynamic_cast<C&>(p);
		std::cout << "it's C" << std::endl;
		(void)refC;
		return;
	}
	catch(const std::exception& e) {}
	std::cout << "it's Nothing" << std::endl;
}