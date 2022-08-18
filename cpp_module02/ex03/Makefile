NAME	=	PointInTriangle
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM	=	rm -rf
CXX	=	c++

SRCS	=	main.cpp Fixed.cpp Point.cpp bsp.cpp

OBJS	=	$(SRCS:.cpp=.o)

HEADER	=	Fixed.hpp Point.hpp

$(NAME)	:	$(OBJS) $(HEADER)
		@$(CXX) $(FLAGS) $(OBJS) -o $(NAME)


%.o:%.cpp Fixed.hpp Point.hpp
	@$(CXX) $(FLAGS) -c $< -o $@
	@echo "compiling..."

all:	$(NAME)

clean	:
	@$(RM) $(OBJS)

fclean	: clean
	@$(RM) $(NAME)

re	: fclean all

.PHONY: all clean fclean re