CC=gcc
CFLAGS=-Wall -Wextra -Werror
SRCS=ft_bzero.c  ft_isalnum.c  ft_isalpha.c  ft_isascii.c  ft_isdigit.c  ft_isprint.c  ft_memcpy.c  ft_memset.c  ft_strlen.c ft_strnstr.c
TEST_SRCS = ./test/*.c
NAME=libft.a
OBJS= ${SRCS:.c=.o}

RM = rm -f

all: ${NAME}

${NAME}:
	${CC} -c ${CFLAGS} ${SRCS}
	ar -rc ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}
	${RM} a.out


test: fclean
	${CC} ${SRCS} ${TEST_SRCS}
	./a.out

re: fclean all

