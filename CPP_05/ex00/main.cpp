# include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		std::cout << "--- Wrong grade (too low) ---" << std::endl;
		Bureaucrat lea("Lea", 155);
		std::cout << lea << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "--- Wrong grade (too high) ---" << std::endl;
		Bureaucrat lea("Lea", 0);
		std::cout << lea << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "--- Already higher grade ---" << std::endl;
		Bureaucrat emma("Emma", 1);
		std::cout << emma << std::endl;
		emma.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "--- Already lower grade ---" << std::endl;
		Bureaucrat gina("Gina", 150);
		std::cout << gina << std::endl;
		gina.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "--- Decrement and increment grade ---" << std::endl;
		Bureaucrat thea("Thea", 40);
		std::cout << thea << std::endl;
		thea.decrementGrade();
		std::cout << thea << std::endl;
		thea.incrementGrade();
		std::cout << thea << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}