#include "Bureaucrat.hpp"

int main()
{

  std::cout << "== TEST 1 ==" << std::endl;
  std::cout << std::endl;
  try
  {
    Bureaucrat david("david", 0);
		std::cout << david << std::endl;
    Bureaucrat jean(david);
		std::cout << jean << std::endl;
  }
  catch (std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }

  std::cout << std::endl;
  std::cout << "== TEST 2 ==" << std::endl;
  std::cout << std::endl;
	try
  {
    Bureaucrat david("david", 151);
		std::cout << david << std::endl;
  }
  catch (std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }

  std::cout << std::endl;
  std::cout << "== TEST 3 ==" << std::endl;
  std::cout << std::endl;
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

  std::cout << std::endl;
  std::cout << "== TEST 4 ==" << std::endl;
  std::cout << std::endl;
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
  
  std::cout << std::endl;
  std::cout << "== TEST 5 ==" << std::endl;
  std::cout << std::endl;
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