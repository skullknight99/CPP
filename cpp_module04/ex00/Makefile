NAME	=	poly
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM	=	rm -rf
CXX	=	c++

SRCS	=	main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

OBJS	=	$(SRCS:.cpp=.o)

HEADER	=	Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp

$(NAME)	:	$(OBJS) $(HEADER)
		@$(CXX) $(FLAGS) $(OBJS) -o $(NAME)


%.o:%.cpp $(HEADER)
	@$(CXX) $(FLAGS) -c $< -o $@
	@echo "compiling..."

all:	$(NAME)

clean	:
	@$(RM) $(OBJS)

fclean	: clean
	@$(RM) $(NAME)

re	: fclean all

.PHONY: all clean fclean re