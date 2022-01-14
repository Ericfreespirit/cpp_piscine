#ifndef ROBOT_H
#define ROBOT_H
#include "Form.hpp"

class RobotomyRequestForm : public Form{

public:
	RobotomyRequestForm(const std::string &);
	RobotomyRequestForm(const RobotomyRequestForm &);
	~RobotomyRequestForm();

	RobotomyRequestForm &operator=(const RobotomyRequestForm &ref);

	void	action()const;

private:
	std::string _name;
	int					_grade_sign;
	int					_grade_exec;
	bool				_sign;
};	


// std::ostream &operator<<(std::ostream &os, RobotomyRequestForm &ref);

#endif