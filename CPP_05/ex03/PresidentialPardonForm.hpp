#ifndef PresidentialPardonForm_H
# define PresidentialPardonForm_H

# include "Form.hpp"

class AForm;

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &src);
		PresidentialPardonForm & operator=(const PresidentialPardonForm &src);
		virtual ~PresidentialPardonForm(void);

		const std::string getTarget(void) const;
		void execute(Bureaucrat const &executor) const;

	private:
		std::string _target;
};

#endif