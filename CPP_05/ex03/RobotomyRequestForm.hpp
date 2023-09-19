#ifndef RobotomyRequestForm_H
# define RobotomyRequestForm_H

# include "Form.hpp"
# include <ctime>
# include <iostream>
# include <stdlib.h>

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		RobotomyRequestForm & operator=(const RobotomyRequestForm &src);
		virtual ~RobotomyRequestForm(void);

		std::string getTarget(void) const;
		void execute(Bureaucrat const &executor) const;

	private:
		std::string _target;
};

#endif