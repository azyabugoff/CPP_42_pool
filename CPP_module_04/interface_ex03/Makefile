NAME	= interface

SRCS	= main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

DEPS	= 
OBJS	= $(SRCS:.cpp=.o)

CC		= g++#clang++
RM		= /bin/rm -f
FLAGS	= -g -Wall -Werror -Wextra

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
				$(RM) $(OBJS)
				$(RM) $(NAME)

#re:				fclean all

.PHONY:			all clean# fclean re
