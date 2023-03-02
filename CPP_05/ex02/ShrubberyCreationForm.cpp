#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :  AForm("ShrubberyCreationForm", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
{
	*this = src;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	this->_target = src.getTarget();
	return (*this);
}


ShrubberyCreationForm::~ShrubberyCreationForm(void)
{}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return(this->_target);
}
			