#include "Form.hpp"

bool Form::beSigned(Bureaucrat const &employe)
{
	if (employe.getGrade() <= _signGrade)
		_signed = true;
	else
		throw GradeTooLowException();
    return (1);
}

std::ostream & operator<<(std::ostream &stream, const Form &src)
{
	stream << src.getName() << ", is a form , grade to be sign is " 
		<< src.getsignGrade() << ", grade to be exec is " << src.getexecGrade()
		<< " and the bool is " << src.getsigned();
	
	return (stream);
}

// constructor && destructor //

Form::Form(const std::string name,const int & signGrade,const int & execGrade) :_name(name),
                                                                                _signed(0),
                                                                                _signGrade(signGrade),
                                                                                _execGrade(execGrade) {
    if (signGrade > 150 || execGrade > 150)
        throw GradeTooLowException();
    if (signGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
}

Form::Form(const Form &src) :   _name(src._name),
                                _signed(0),
                                _signGrade(src._signGrade),
                                _execGrade(src._execGrade)
{}

Form &Form::operator=(const Form &src)
{
    _signed = src._signed;
    return (*this);
}

Form::~Form(void)
{
    return ;
}

// Exception //

const char* Form::GradeTooHighException::what(void) const throw()
{
	return ("EXCEPTION : Form grade is too high");
}

const char* Form::GradeTooLowException::what(void) const throw()
{
	return ("EXCEPTION : Bureaucrat grade is too low to sign");
}

// Accessorr //

int Form::getsignGrade(void) const
{
    return (_signGrade);
}

int Form::getexecGrade(void) const
{
    return (_execGrade);
}

bool Form::getsigned(void) const
{
    return (_signed);
}

const std::string Form::getName(void) const
{
    return (_name);
}