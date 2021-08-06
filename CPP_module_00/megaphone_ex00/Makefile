NAME	= megaphone

SRCS	= megaphone.cpp

INC		=
DEPS	= $(INC)
OBJS	= $(SRCS:.cpp=.o)

CC		= clang++
RM		= /bin/rm -f
FLAGS	= -g -Wall -Werror -Wextra

#-include $(INC)
%.o: %.cpp $(DEPS)
	$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

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
