#include "Bureaucrat.hpp"

void	Bureaucrat::signForm(Form &form)
{
	if (form.getsigned())
		std::cout << _name << "couldn’t sign " << form << "because it s already signed" << std::endl;
	else if (form.beSigned(*this))
		std::cout << _name << " signed " << form << std::endl;
}

void    Bureaucrat::incrementGrade(void)
{
    _grade--;
    if (_grade < 1)
        throw GradeTooHighException();
}

void   Bureaucrat::decrementGrade(void)
{
    _grade++;
    if (_grade > 150)
        throw GradeTooLowException();
}

std::ostream & operator<<(std::ostream &stream, const Bureaucrat &source)
{
	stream << source.getName() << ", is a bureaucrat and her grade is " << source.getGrade();
	return (stream);
}

// Setter && Getter //

int Bureaucrat::getGrade(void) const
{
    return (_grade);
}

const std::string Bureaucrat::getName(void) const
{
    return (_name);
}

// constructor && destructor //

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name), _grade(src._grade) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
    _grade = src.getGrade();
    return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
    return ;
}

// exception //

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("EXCEPTION : Bureaucrat grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("EXCEPTION : Bureaucrat grade is too low");
}

