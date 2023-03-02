#ifndef RobotomyRequestForm_H
# define RobotomyRequestForm_H

# include "Form.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		RobotomyRequestForm & operator=(const RobotomyRequestForm &src);
		virtual ~RobotomyRequestForm(void);

		std::string getTarget(void) const;

	private:
		std::string _target;
};

#endif