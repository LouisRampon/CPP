#include "Intern.hpp"

AForm*	Intern::makeSCForm(std::string target) {
    return (new ShrubberyCreationForm(target));
}

AForm*	Intern::makeRRForm(std::string target) {
    return (new RobotomyRequestForm(target));
}

AForm*	Intern::makePPForm(std::string target){
    return (new PresidentialPardonForm(target));
}

AForm* Intern::makeForm(std::string name, std::string target)
{
    const unsigned int nbr_form = 3;
    const std::string form_name[nbr_form] =
        {"shrubbery creation", "robotomy request", "presidential pardon"};
    static AForm* (*makeFormFunctionPtr[nbr_form])(std::string target) =
        {makeSCForm, makeRRForm, makePPForm};

    for(int i = 0; i < 3; i++)
    {
        if (!name.compare(form_name[i]))
        {
            std::cout << "Intern creates the form : " << name << std::endl;
            return (makeFormFunctionPtr[i](target));
        }
    }
    std::cout << "error" << std::endl;
    return (NULL);
}

Intern::Intern(void) {}

Intern::Intern(const Intern &src) {
	*this = src;
}

Intern & Intern::operator=(const Intern &src) {
	(void)src;
	return (*this);
}

Intern::~Intern(void) {}
