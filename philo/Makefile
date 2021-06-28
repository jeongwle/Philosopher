NAME	= philo

SRCS	= ./main.c \
		  ./ft_usleep.c \
		  ./utils.c



OBJS	= $(SRCS:.c=.o)
RM		= rm -f
CC		= gcc

.c.o :
	$(CC) -g -c -o $@ $<

$(NAME) : $(OBJS)
	$(CC) -lpthread -o $@ $^
#	$(CC) -fsanitize=address -g2 -lpthread -o $@ $^

all : $(NAME)

fclean : clean
	$(RM) $(NAME)

clean :
	$(RM) $(OBJS)

re : fclean all

.PHONY : all clean fclean re
