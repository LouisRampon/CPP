#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string target) :  AForm("RobotomyRequestForm", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
{
	*this = src;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	this->_target = src.getTarget();
	return (*this);
}


RobotomyRequestForm::~RobotomyRequestForm(void)
{}

std::string RobotomyRequestForm::getTarget(void) const
{
	return(this->_target);
}
			