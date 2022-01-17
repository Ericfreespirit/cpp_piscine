NAME = bureaucrat

FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98 -MMD -MP 

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

$(NAME) :  $(OBJS) $(INCLUDE)
	clang++ $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp 
	clang++ $(FLAGS) -c $< -I .

clean :
	rm -rf $(OBJS)
	rm -rf *.d
	
-include $(OBJS:.o=.d)

fclean : clean
	rm -rf $(NAME)

re : fclean all
.PHONY : all clean fclean re