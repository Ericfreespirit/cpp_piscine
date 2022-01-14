#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	std::cout << "== #1 TEST ==" << std::endl;
	Form *form_house = new ShrubberyCreationForm("House");
	Form *form_macron = new PresidentialPardonForm("Macron");
	Form *form_terminator = new RobotomyRequestForm("Terminator");
	Bureaucrat eric("eric", 1);

	eric.signForm(*form_house);
	eric.executeForm(*form_house);

	eric.signForm(*form_macron);
	eric.executeForm(*form_macron);

	eric.signForm(*form_terminator);
	eric.executeForm(*form_terminator);

	std::cout << "== #2 TEST ==" << std::endl;
	Bureaucrat david("david", 150);

	david.signForm(*form_house);
	david.executeForm(*form_house);

	david.signForm(*form_macron);
	david.executeForm(*form_macron);

	david.signForm(*form_terminator);
	david.executeForm(*form_terminator);
	delete form_house;
	delete form_macron;
	delete form_terminator;
	return (0);
}