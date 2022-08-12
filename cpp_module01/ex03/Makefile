NAME=ViolenceSolvesEverything

CXX = c++

RM = rm -rf

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Weapon.cpp HumanA.cpp \
		HumanB.cpp \

OBJS = $(SRCS:.cpp=.o)

HEADER = HumanA.hpp HumanB.hpp Weapon.hpp

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