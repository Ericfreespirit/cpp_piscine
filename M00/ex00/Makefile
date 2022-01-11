NAME = megaphone

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRCS = megaphone.cpp

OBJS = $(SRCS:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJS)
	clang++ $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	clang++ -c $<

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
.PHONY : all clean fclean re
