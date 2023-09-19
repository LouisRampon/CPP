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
		AForm(const std::string name,const int & signGrade,const int & execGrade);
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

		virtual void execute(Bureaucrat const &executor) const = 0;
		bool beSigned(Bureaucrat &employe);

    private:
        const std::string	_name;
		const int					_signGrade;
		const int					_execGrade;	
		bool				_signed;	
};

std::ostream & operator<<(std::ostream &stream, const AForm &src);

#endif