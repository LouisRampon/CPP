#include "Form.hpp"

bool Form::beSigned(Bureaucrat &employe)
{
	if (employe.getGrade() <= this->_signGrade)
		this->_signed = true;
	else
		throw GradeTooLowException();
	return (this->_signed);
}

std::ostream & operator<<(std::ostream &stream, const Form &src)
{
	stream << src.getName() << ", is a form , grade to be sign is " 
		<< src.getsignGrade() << ", grade to be exec is " << src.getexecGrade()
		<< " and the bool is " << src.getsigned();
	
	return (stream);
}

// constructor && destructor //

Form::Form(const std::string name, int signGrade, int execGrade) : _name(name)
{
    //std::cout << "Name and Grade Constructor called" << std::endl;
    if (signGrade > 150 || execGrade > 150)
        throw GradeTooLowException();
    if (signGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
	this->_signed = false;
    this->_signGrade = signGrade;
    this->_execGrade = execGrade;
}

Form::Form(const Form &src) : _name(src._name)
{
   // std::cout << "Copy Constructor called" << std::endl;
    *this = src;
}

Form &Form::operator=(const Form &src)
{
    //std::cout << "Copy assignment orepator called" << std::endl;
    this->_signGrade = src.getsignGrade();
	this->_execGrade = src.getexecGrade();
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

// Setter && Getter //

int Form::getsignGrade(void) const
{
    return (this->_signGrade);
}

int Form::getexecGrade(void) const
{
    return (this->_execGrade);
}

bool Form::getsigned(void) const
{
    return (this->_signed);
}

const std::string Form::getName(void) const
{
    return (this->_name);
}