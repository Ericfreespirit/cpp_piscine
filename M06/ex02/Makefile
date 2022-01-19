NAME = convert

FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

SRCS =	main.cpp \
		Base.cpp \
		A.cpp \
		B.cpp \
		C.cpp \


INCLUDE = 	Base.hpp \
			A.hpp \
			B.hpp \
			C.hpp \

OBJS = $(SRCS:%.cpp=%.o)

all : $(NAME)

$(NAME) :  $(INCLUDE) $(OBJS)
	clang++ $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	clang++ $(FLAGS) -c $< -I .


clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
.PHONY : all clean fclean re% 