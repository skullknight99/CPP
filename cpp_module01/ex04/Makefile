NAME=Sed

TEST=Alt

CXX = c++

RM = rm -rf

FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp

T_SRCS = alt.cpp

OBJS = $(SRCS:.cpp=.o)

T_OBJS = $(T_SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@$(CXX) $(FLAGS) -c $< -o $@
	@echo "compiling..."

test: $(TEST)

$(TEST): $(T_OBJS)
	@$(CXX) $(FLAGS) $(T_OBJS) -o $(TEST)

clean:
	@$(RM) $(OBJS) $(T_OBJS)

fclean: clean
	@$(RM) $(NAME) $(TEST)

re: fclean all

.PHONY: all clean fclean re