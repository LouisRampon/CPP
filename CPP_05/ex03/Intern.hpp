#ifndef INTERN_H
# define INTERN_H

# include <iostream>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
    public :
    Intern(void);
    Intern(const Intern &src);
    Intern & operator=(const Intern &src);
    ~Intern(void);

    AForm* makeForm(std::string name, std::string target);
    static AForm*	makeSCForm(std::string target);
	static AForm*	makeRRForm(std::string target);
	static AForm*	makePPForm(std::string target);   

    private :
};




#endif