#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :  AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src), _target(src._target) {}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	_target = src.getTarget();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{}

std::string PresidentialPardonForm::getTarget(void) const
{
	return(_target);
}

bool PresidentialPardonForm::execute(Bureaucrat &executor) const
{
    if ( executor.getGrade() > getexecGrade() )
      return (false);
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    return (true);
}		