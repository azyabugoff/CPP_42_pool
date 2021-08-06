NAME	= phonebook

SRCS	= Contact.cpp PhoneBook.cpp

INC		= PhoneBook.hpp
DEPS	= $(INC)
OBJS	= $(SRCS:.cpp=.o)

CC		= clang++
RM		= /bin/rm -f
FLAGS	= -g -Wall -Werror -Wextra

%.o: %.cpp $(DEPS)
	$(CC) $(FLAGS) -c $< -include $(INC) -o $(<:.cpp=.o)

$(NAME):		$(OBJS)
					$(CC) $(FLAGS) $(OBJS) -o $(NAME)
					$(RM) $(OBJS)

all:			$(NAME)

#clean:
#				$(RM) $(OBJS)

#fclean
clean:
				$(RM) $(NAME)

#re:				fclean all

.PHONY:			all clean# fclean re
