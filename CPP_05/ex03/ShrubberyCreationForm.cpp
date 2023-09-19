#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :  AForm("ShrubberyCreationForm", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src), _target(src._target) {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	_target = src.getTarget();
	return (*this);
}


ShrubberyCreationForm::~ShrubberyCreationForm(void)
{}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return(_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if ( executor.getGrade() > getexecGrade() )
        throw GradeTooLowException();

    std::ofstream file((_target + "_shrubbery").c_str());
    file << "                      ___" << std::endl
    << "                _,-'\"\"   \"\"\"\"`--." << std::endl
    << "             ,-'          __,,-- \\" << std::endl
    << "           ,\'    __,--\"\"\"\"dF      )" << std::endl
    << "          /   .-\"Hb_,--\"\"dF      /" << std::endl
    << "        ,\'       _Hb ___dF\"-._,-'" << std::endl
    << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl
    << "     (     ,-'                  `." << std::endl
    << "      `._,'     _   _             ;" << std::endl
    << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl
    << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl
    << "        `--\'   \"Hb  HH  dF\"" << std::endl
    << "                \"Hb HH dF" << std::endl
    << "                 \"HbHHdF" << std::endl
    << "                  |HHHF" << std::endl
    << "                  |HHH|" << std::endl
    << "                  |HHH|" << std::endl
    << "                  |HHH|" << std::endl
    << "                  |HHH|" << std::endl
    << "                  dHHHb" << std::endl
    << "                .dFd|bHb.               o" << std::endl
    << "      o       .dHFdH|HbTHb.          o /" << std::endl
    << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl
    << "##########################################" << std::endl;
    file.close();
}		