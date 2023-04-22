CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = fp.c ft_operator.c ft_put.c
OBJS = $(SRCS:.c=.o)
NAME = do-op

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) -o $(NAME) $(CFLAGS) $(OBJS)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME) 

re : fclean all
