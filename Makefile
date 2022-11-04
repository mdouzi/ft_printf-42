CC = gcc
LIBC = ar rc
FLAGS = -Wall -Wextra -Werror
SRCS = ft_putchar.c ft_putstr.c ft_putnbr.c ft_puthex.c ft_printf.c ft_putunsigned.c
OBGS = $(SRCS:.c=.o)

NAME = libftprintf.a

all:${NAME}

${NAME}:${OBGS}
	${LIBC} ${NAME} ${OBGS}
clean:
	rm -f ${OBGS}
fclean:clean
	rm -f ${NAME}
re:fclean all