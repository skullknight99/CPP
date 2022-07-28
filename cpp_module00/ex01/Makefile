NAME	=	phonebook

HEADER	=	PhoneBook.hpp Contact.hpp

SRCS	=	main.cpp contact.cpp phonebook.cpp

OBJS	=	${SRCS:.cpp=.o}


RM		=	rm -rf

CXX		=	c++

FLAGS	=	-Wall -Wextra -Werror

%.o:%.cpp	$(HEADER)
			@$(CXX) $(FLAGS) -c $< -o $@

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(FLAGS) $(SRCS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all fclean clean re