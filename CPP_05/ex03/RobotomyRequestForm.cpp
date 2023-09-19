#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string target) :  AForm("RobotomyRequestForm", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src), _target(src._target) {}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	_target = src.getTarget();
	return (*this);
}


RobotomyRequestForm::~RobotomyRequestForm(void)
{}

std::string RobotomyRequestForm::getTarget(void) const
{
	return(_target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const	
{
    if ( executor.getGrade() > getexecGrade() )
        throw GradeTooLowException();
    srand(std::time(NULL));
    
    int random = rand();
	std::cout <<  "BRRRRRRRRRRRRRRR! ";
	if ( random % 2 == 0 )
            std::cout << _target << " has been robotomized!" << std::endl;
        else
            std::cout << _target << " Robotomy failed!" << std::endl;
}
