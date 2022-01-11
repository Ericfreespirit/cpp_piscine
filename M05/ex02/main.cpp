#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	std::cout << "== #1 TEST ==" << std::endl;
	Form *form_house = new ShrubberyCreationForm("house");
	Bureaucrat eric("eric", 1);

	eric.signForm(*form_house);
	eric.executeForm(*form_house);
	return (0);
}