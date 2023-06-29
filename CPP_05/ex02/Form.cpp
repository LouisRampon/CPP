#include "Form.hpp"

bool AForm::beSigned(Bureaucrat &employe)
{
	if (employe.getGrade() <= _signGrade)
		_signed = true;
	else
		throw GradeTooLowException();
	return (_signed);
}

// void AForm::execute(Bureaucrat &executor) const
// {
//     if ( executor.getGrade() > getexecGrade() )
//       throw AForm::GradeTooLowException();
//     else if (!getsigned())
//       throw AForm::FormNotSigned();
    
// }

std::ostream & operator<<(std::ostream &stream, const AForm &src)
{
	stream << src.getName() << ", is a form , grade to be sign is " 
		<< src.getsignGrade() << ", grade to be exec is " << src.getexecGrade()
		<< " and the bool is " << src.getsigned();
	
	return (stream);
}

// constructor && destructor //

AForm::AForm(void) : _name("unamed"),_signGrade(0), _execGrade(0), _signed(0)
{}

AForm::AForm(const std::string name, int signGrade, int execGrade) : _name(name)
{
    //std::cout << "Name and Grade Constructor called" << std::endl;
    if (signGrade > 150 || execGrade > 150)
        throw GradeTooLowException();
    if (signGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
    _signed = false;
    _signGrade = signGrade;
    _execGrade = execGrade;
}

AForm::AForm(const AForm &src) : _name(src._name)
{
   // std::cout << "Copy Constructor called" << std::endl;
    *this = src;
}

AForm &AForm::operator=(const AForm &src)
{
    //std::cout << "Copy assignment orepator called" << std::endl;
    _signGrade = src.getsignGrade();
	_execGrade = src.getexecGrade();
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