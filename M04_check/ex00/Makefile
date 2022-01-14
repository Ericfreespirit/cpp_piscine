NAME = animal

FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

INCLUDE = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

OBJS = $(SRCS:%.cpp=%.o)


all : $(NAME)

$(NAME) :  $(INCLUDE) $(OBJS) 
	clang++ $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	clang++ $(FLAGS) -c $< -I .

%.o : %.hpp
	rm -rf $@ 

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
.PHONY : all clean fclean re
