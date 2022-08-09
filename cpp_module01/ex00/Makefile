NAME	=	BraiiiiiiinnnzzzZ
FLAGS	=	-Wall -Wextra -Werror
RM	=	rm -rf
CXX	=	c++

SRCS	=	main.cpp newZombie.cpp randomChump.cpp \
			Zombie.cpp \

OBJS	=	$(SRCS:.cpp=.o)

HEADER	=	zombie.hpp

$(NAME)	:	$(OBJS) $(HEADER)
		@$(CXX) $(FLAGS) $(OBJS) -o $(NAME)


%.o:%.cpp Zombie.hpp
	@$(CXX) $(FLAGS) -c $< -o $@
	@echo "compiling..."

all:	$(NAME)

clean	:
	@$(RM) $(OBJS)

fclean	: clean
	@$(RM) $(NAME)

re	: fclean all

.PHONY: all clean fclean re