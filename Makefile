CC = cc
NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_putchar.c ft_putnbr.c ft_print_hex.c ft_putstr.c ft_toupper.c
OBJ = ${SRC:.c=.o}
AR = ar rc

all : ${NAME}
${NAME} :  ${OBJ}
	${AR} $@ $^
%.o : %.c ft_printf.h
	${CC} ${CFLAGS} -c -o $@ $<
clean :
	rm -rf ${OBJ}
fclean : clean
	rm -rf ${NAME}
re : fclean all
