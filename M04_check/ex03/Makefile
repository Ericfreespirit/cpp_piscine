NAME = materia

FLAGS = -Wall -Wextra -Werror  -std=c++98 -MMD -MP

SRCS =	main.cpp \
		AMateria.cpp\
		Character.cpp \
		MateriaSource.cpp\
		Ice.cpp \
		IMateriaSource.cpp \
		ICharacter.cpp \
		Cure.cpp \


INCLUDE =	AMateria.hpp\
			ICharacter.hpp \
			Character.hpp \
			IMateriaSource.hpp \
			MateriaSource.hpp \
			Cure.hpp \
			Ice.hpp \



OBJS = $(SRCS:%.cpp=%.o)

all : $(NAME)

$(NAME) :  $(INCLUDE) $(OBJS)
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
