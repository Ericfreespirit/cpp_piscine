NAME = phone_book

SRCS = *.cpp

INCLUDE = *.hpp

OBJS = $(SRCS:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJS) $(INCLUDE)
	clang++ $(OBJS) -o $(NAME)

%.o : %.cpp
	clang++ -c $< -I .

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
.PHONY : all clean fclean re
