NAME		= megaphone

SRCS		= megaphone.cpp

CXX			= c++

FLAGS		= -Wall -Wextra -Werror

RM			= rm -rf

OBJS		= ${SRCS:.cpp=.o}

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CXX) $(FLAGS) $(SRCS) -o $(NAME)

%.o:%.cpp	
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "compiling..."

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean test re