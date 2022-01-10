#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "== #1 TEST ==" << std::endl;
  try
  {
		Form ufc("ufc",0, 1);
		std::cout << ufc << std::endl;
  }
  catch (std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }
	std::cout << "== #2 TEST ==" << std::endl;
	try
  {

		Form ufc("ufc",1, 151);
		std::cout << ufc << std::endl;
  }
  catch (std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }
	std::cout << "== #3 TEST ==" << std::endl;
  try
  {
    Bureaucrat cyril("Cyril", 1);
    Bureaucrat noob("Noob", 150);
		Form ufc("ufc",5, 4);
		std::cout << cyril << std::endl;
		std::cout << noob << std::endl;
		std::cout << ufc << std::endl;
		std::cout << "---------" << std::endl;
		ufc.beSigned(cyril);
		cyril.signForm(ufc);
		std::cout << ufc << std::endl;
		noob.signForm(ufc);
  }
  catch (std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }
	return (0);
}