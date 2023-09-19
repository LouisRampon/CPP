#include "Form.hpp"

bool AForm::beSigned(Bureaucrat &employe)
{
	if (employe.getGrade() <= _signGrade)
		_signed = true;
	else
		throw GradeTooLowException();
	return (_signed);
}

std::ostream & operator<<(std::ostream &stream, const AForm &src)
{
	stream << src.getName() << ", is a form , grade to be sign is " 
		<< src.getsignGrade() << ", grade to be exec is " << src.getexecGrade()
		<< " and the bool is " << src.getsigned();
	
	return (stream);
}

// constructor && destructor //

AForm::AForm(const std::string name,const int & signGrade,const int & execGrade) :_name(name),
                                                                                _signGrade(signGrade),
                                                                                _execGrade(execGrade),
                                                                                _signed(false) {
    if (signGrade > 150 || execGrade > 150)
        throw GradeTooLowException();
    if (signGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
}

AForm::AForm(const AForm &src) :   _name(src._name),
                                _signGrade(src._signGrade),
                                _execGrade(src._execGrade),
                                _signed(src._signed)
{}

AForm &AForm::operator=(const AForm &src)
{
    _signed = src.getsigned();
    return (*this);
}

AForm::~AForm(void)
{
    return ;
}

// Exception //

const char* AForm::GradeTooHighException::what(void) const throw()
{
	return ("EXCEPTION : Form grade is too high");
}

const char* AForm::GradeTooLowException::what(void) const throw()
{
	return ("EXCEPTION : Bureaucrat grade is too low");
}


// Setter && Getter //

int AForm::getsignGrade(void) const
{
    return (_signGrade);
}

int AForm::getexecGrade(void) const
{
    return (_execGrade);
}

bool AForm::getsigned(void) const
{
    return (_signed);
}

const std::string AForm::getName(void) const
{
    return (_name);
}