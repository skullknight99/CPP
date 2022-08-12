NAME=HiThisIsBrain

CXX = c++

RM = rm -rf

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	@$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@$(CXX) $(FLAGS) -c $< -o $@
	@echo "compiling..."

all: $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re