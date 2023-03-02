#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <string>

class Bureaucrat
{
    public :
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &src);
        Bureaucrat & operator=(const Bureaucrat &src);
        ~Bureaucrat(void);

        int getGrade(void) const;
        const std::string getName(void) const;

        void    incrementGrade(void);
        void    decrementGrade(void);

        class GradeTooHighException : public std::exception
        {
                public:
                    virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
                public:
                    virtual const char* what() const throw();
        };

    private :
        const std::string _name;
        int _grade;
};

std::ostream & operator<<(std::ostream &stream, const Bureaucrat &src);

#endif