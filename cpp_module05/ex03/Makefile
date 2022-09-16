NAME	=	Slaves
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM	=	rm -rf
CXX	=	c++

SRCS	=	main.cpp Bureaucrat.cpp Form.cpp \
			PresidentialPardonForm.cpp ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp Intern.cpp

OBJS	=	$(SRCS:.cpp=.o)

HEADER	=	Bureaucrat.hpp Form.hpp \
			PresidentialPardonForm.hpp ShrubberyCreationForm.hpp \
			RobotomyRequestForm.hpp Intern.hpp

$(NAME)	:	$(OBJS) $(HEADER)
		@$(CXX) $(FLAGS) $(OBJS) -o $(NAME)


%.o:%.cpp %.hpp
	@$(CXX) $(FLAGS) -c $< -o $@
	@echo "compiling..."

all:	$(NAME)

clean	:
	@$(RM) $(OBJS)

fclean	: clean
	@$(RM) $(NAME)

re	: fclean all

.PHONY: all clean fclean re