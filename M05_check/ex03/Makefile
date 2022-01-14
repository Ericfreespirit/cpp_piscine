NAME = bureaucrat

FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98 

SRCS =	main.cpp \
				Bureaucrat.cpp \
				Form.cpp \
				ShrubberyCreationForm.cpp \
				PresidentialPardonForm.cpp \
				RobotomyRequestForm.cpp \
				Intern.cpp\

INCLUDE =	Bureaucrat.hpp \
					Form.hpp \
					ShrubberyCreationForm.hpp \
					PresidentialPardonForm.hpp \
					RobotomyRequestForm.hpp \
					Intern.hpp \

OBJS = $(SRCS:%.cpp=%.o)

all : $(NAME)

$(NAME) :  $(INCLUDE) $(OBJS)
	clang++ $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	clang++ -c $< -I .

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
.PHONY : all clean fclean re