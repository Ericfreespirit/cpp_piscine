NAME = claptrap

FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98 

SRCS = main.cpp Animal.cpp

INCLUDE = Animal.hpp

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
