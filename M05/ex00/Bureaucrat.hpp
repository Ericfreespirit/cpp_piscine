#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>
#include <exception>

class Bureaucrat{
	public:
		Bureaucrat(std::string, int);
		Bureaucrat(const Bureaucrat &ref);
		~Bureaucrat();

		Bureaucrat &operator=(const Bureaucrat &ref);
		std::string		getName();
		int						getGrade();
		void					increGrade();
		void					decreGrade();

	private:
		std::string _name;
		int	_grade; // [1;150]

	public:
	class GradeTooHighException : public std::exception{
		public:
		const char* what() const throw();
	};

	public:
	class GradeTooLowException : public std::exception{
		public:
		const char* what() const throw();
	};
};
std::ostream &operator<<(std::ostream& os, Bureaucrat& ref);
#endif