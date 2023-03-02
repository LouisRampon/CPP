#ifndef FORM_H
# define FORM_H

# include "Bureaucrat.hpp"
# include <iostream>
# include <string>
class Bureaucrat;

class AForm
{
    public:
		AForm(void);
		AForm(const std::string name, int signGrade, int execGrade);
		AForm(const AForm &src);
		AForm & operator=(const AForm &src);
		virtual ~AForm(void);

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

		virtual bool beSigned(Bureaucrat &employe) = 0;

    private:
        const std::string	_name;
		int					_signGrade;
		int					_execGrade;	
		 bool				_signed;	
};

std::ostream & operator<<(std::ostream &stream, const AForm &src);

#endif