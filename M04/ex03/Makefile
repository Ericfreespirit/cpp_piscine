NAME = materia

FLAGS = -Wall -Wextra -Werror  -std=c++98 

SRCS =	main.cpp \
		IMateriaSource.cpp\
		MateriaSource.cpp\
		AMateria.cpp\

INCLUDE =	IMateriaSource.hpp \
			MateriaSource.hpp \
			AMateria.hpp\

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
