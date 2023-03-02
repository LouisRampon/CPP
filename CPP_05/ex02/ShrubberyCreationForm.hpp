#ifndef ShrubberyCreationForm_H
# define ShrubberyCreationForm_H

# include "Form.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &src);
		virtual ~ShrubberyCreationForm(void);

		std::string getTarget(void) const;

	private:
		std::string _target;
};

#endif