NAME	=	MoarBraiiiiinnnzzzZ
FLAGS	=	-Wall -Wextra 
RM	=	rm -rf
CXX	=	c++

SRCS	=	main.cpp Zombie.cpp zombieHorde.cpp

OBJS	=	$(SRCS:.cpp=.o)

NAME	:	$(OBJS)
		@$(CXX) $(FLAGS) $(OBJS) -o $(NAME)


%.o:%.cpp Zombie.hpp
	@$(CXX) $(FLAGS) -c $< -o $@
	@echo "compiling..."

all:	$(NAME)

clean	:
		$(RM) $(OBJS)

fclean	: clean
		$(RM) $(NAME)

re	: fclean all

.PHONY: all clean fclean re