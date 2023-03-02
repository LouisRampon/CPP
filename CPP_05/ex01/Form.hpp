#ifndef FORM_H
# define FORM_H

# include "Bureaucrat.hpp"
# include <iostream>
# include <string>
class Bureaucrat;

class Form
{
    public:
		Form(const std::string name, int signGrade, int execGrade);
		Form(const Form &src);
		Form & operator=(const Form &src);
		~Form(void);

		int	getsignGrade(void) const;
		int	getexecGrade(void) const;
		bool getsigned(void) const;
		const std::string getName(void) const;

		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};

		bool beSigned(Bureaucrat &employe);

    private:
        const std::string	_name;
        bool				_signed;
		int					_signGrade;
		int					_execGrade;		
};

std::ostream & operator<<(std::ostream &stream, const Form &src);

#endif