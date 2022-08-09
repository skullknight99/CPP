NAME=Sed

CXX = c++

RM = rm -rf

FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

HEADER = sed.hpp

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	@$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@$(CXX) $(FLAGS) -c $< -o $@
	@echo "compiling..."

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re