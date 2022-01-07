#include "Bureaucrat.hpp"

int main()
{
  try
  {
    Bureaucrat david("david", 0);
		std::cout << david << std::endl;
  }
  catch (std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }

	try
  {
    Bureaucrat david("david", 151);
		std::cout << david << std::endl;
  }
  catch (std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }

	try
  {
    Bureaucrat david("david", 42);
		std::cout << david << std::endl;
		david.increGrade();
		std::cout << david << std::endl;
		david.decreGrade();
		std::cout << david << std::endl;
  }
  catch (std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }

	try
  {
    Bureaucrat david("david", 1);
		std::cout << david << std::endl;
		david.increGrade();
		std::cout << david << std::endl;

  }
  catch (std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }

	try
  {
    Bureaucrat david("david", 150);
		std::cout << david << std::endl;
		david.decreGrade();
		std::cout << david << std::endl;

  }
  catch (std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }
	return (0);
}