NAME	= phonebook

SRCS	= main.cpp

OBJS	= ${SRCS:.cpp=.o}

RM		= rm -rf

CXX		= c++

FLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(FLAGS) $(SRCS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all fclean clean re