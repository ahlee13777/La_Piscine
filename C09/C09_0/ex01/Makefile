CC = gcc 
CFLAGS = -Wall -Wextra -Werror -c
INC = includes/ft.h
NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = ${SRCS:.c=.o}

all : ${NAME}

%.o : %.c
	${CC} ${CFLAGS} $< -o $@ -I ${INC}

${NAME} : ${OBJS}
	ar rc $@ $^

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all
