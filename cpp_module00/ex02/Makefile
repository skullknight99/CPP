NAME = account
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
CC = c++

SRCS = Account.cpp tests.cpp 
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp Account.hpp
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "compiling..."

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all