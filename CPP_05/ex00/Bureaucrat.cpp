#include "Bureaucrat.hpp"

void    Bureaucrat::incrementGrade(void)
{
    this->_grade--;
    if (this->_grade < 1)
        throw GradeTooHighException();
    std::cout << "You got a promotion but calm down dude" << std::endl;
}

void   Bureaucrat::decrementGrade(void)
{
    this->_grade++;
    if (this->_grade > 150)
        throw GradeTooLowException();
    std::cout << "You got demoted obviously" << std::endl;
}

std::ostream & operator<<(std::ostream &stream, const Bureaucrat &source )
{
	stream << source.getName() << ", is a bureaucrat and her grade is " << source.getGrade();
	return (stream);
}

// Setter && Getter //

int Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

const std::string Bureaucrat::getName(void) const
{
    return (this->_name);
}

// constructor && destructor //

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
    std::cout << "Name and Grade Constructor called" << std::endl;
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
    std::cout << "Copy assignment orepator called" << std::endl;
    this->_grade = src.getGrade();
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

