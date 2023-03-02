#ifndef PresidentialPardonForm_H
# define PresidentialPardonForm_H

# include "Form.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &src);
		PresidentialPardonForm & operator=(const PresidentialPardonForm &src);
		virtual ~PresidentialPardonForm(void);

		std::string getTarget(void) const;

	private:
		std::string _target;
};

#endif