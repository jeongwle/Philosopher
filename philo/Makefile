NAME	= philo

SRCS	= ./



OBJS	= $(SRCS:.c=.o)
RM		= rm -f
CC		= gcc

.c.o :
	$(CC) -lpthread -c -o $@ $<

$(NAME) : $(OBJS)
	$(CC) -lpthread - o $@ $^

all : $(NAME)

fclean : clean
	$(RM) $(NAME)

clean :
	$(RM) $(OBJS)

re : fclean all

.PHONY : all clean fclean re
