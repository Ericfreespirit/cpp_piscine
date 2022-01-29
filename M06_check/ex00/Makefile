NAME = convert

FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98 -MMD -MP

SRCS =	main.cpp 

OBJS = $(SRCS:%.cpp=%.o)

all : $(NAME)

$(NAME) :  $(OBJS)
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
.PHONY : all clean fclean re% 