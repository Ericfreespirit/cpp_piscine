#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"


int main()
{
	std::cout << "== #1 TEST ==" << std::endl;
	Intern someRandomIntern;
	Form* rrf = someRandomIntern.makeForm("robotomy request", "Terminator");
	Form* ppf = someRandomIntern.makeForm("presidential pardon", "Macron");
	Form* scf = someRandomIntern.makeForm("shrubbery creation", "Tree");
	Form* peace = someRandomIntern.makeForm("peace", "peace");


	std::cout << *rrf << std::endl;
	std::cout << *ppf << std::endl;
	std::cout << *scf << std::endl;
	std::cout << *peace << std::endl;

	delete rrf;
	delete ppf;
	delete scf;
	return (0);
}