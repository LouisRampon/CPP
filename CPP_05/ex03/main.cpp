# include "Form.hpp"
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "Intern.hpp"

int main(void)
{
	//AForm form;
	try
	{
		std::cout << "--- Executing presidential that is not signed ---" << std::endl;
		Bureaucrat	lea("Lea", 1);
		AForm *pardon;
		Intern louis;
		
		pardon = louis.makeForm("presidential pardon", "bite");
		std::cout << lea << std::endl;
		std::cout << *pardon << std::endl;
		lea.executeForm(*pardon);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "--- Executing Robotomy that is not signed ---" << std::endl;
		Bureaucrat	lea("Lea", 1);
		RobotomyRequestForm robotomy("Traitor");
		
		std::cout << lea << std::endl;
		std::cout << robotomy << std::endl;
		lea.executeForm(robotomy);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "--- Executing shruberry that is not signed ---" << std::endl;
		Bureaucrat	lea("Lea", 1);
		ShrubberyCreationForm shruberry("garden");
		
		std::cout << lea << std::endl;
		std::cout << shruberry << std::endl;
		lea.executeForm(shruberry);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
		try
	{
		std::cout << "--- Signing and Executing Presidential---" << std::endl;
		Bureaucrat	lea("Lea", 1);
		PresidentialPardonForm pardon("traitor");
		
		std::cout << lea << std::endl;
		std::cout << pardon << std::endl;
		lea.signForm(pardon);
		lea.executeForm(pardon);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "--- Signing and Executing Robotomy---" << std::endl;
		Bureaucrat	lea("Lea", 1);
		RobotomyRequestForm Robotomy("traitor");
		
		std::cout << lea << std::endl;
		std::cout << Robotomy << std::endl;
		lea.signForm(Robotomy);
		lea.executeForm(Robotomy);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "--- Signing and Executing shruberry---" << std::endl;
		Bureaucrat	lea("Lea", 1);
		ShrubberyCreationForm shruberry("garden");
		
		std::cout << lea << std::endl;
		std::cout << shruberry << std::endl;
		lea.signForm(shruberry);
		lea.executeForm(shruberry);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "--- Grade too low to sign ---" << std::endl;
		Bureaucrat	lea("Lea", 150);
		PresidentialPardonForm		pardon("traitor");
		
		std::cout << lea << std::endl;
		std::cout << pardon << std::endl;
		lea.signForm(pardon);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "--- Grade too low to exec ---" << std::endl;
		Bureaucrat	lea("Lea", 20);
		PresidentialPardonForm		pardon("traitor");
		
		std::cout << lea << std::endl;
		std::cout << pardon << std::endl;
		lea.signForm(pardon);
		lea.executeForm(pardon);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}


	return (0);
}