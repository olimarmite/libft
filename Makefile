CC=gcc
CFLAGS=-Wall -Wextra -Werror
LIBS=libft.h
SRCS=ft_bzero.c  ft_isalnum.c  ft_isalpha.c  ft_isascii.c  ft_isdigit.c  ft_isprint.c  ft_memcpy.c  ft_memset.c  ft_strlen.c ft_strnstr.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c
TEST_SRCS = ./test/*.c
NAME=libft.a
OBJS= ${SRCS:.c=.o} ${LIBS:.h=.h.gch}

RM = rm -f

all: ${NAME}

${NAME}:
	${CC} -c ${CFLAGS} ${SRCS} ${LIBS}
	ar -rc ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}
	${RM} a.out


test: fclean
	${CC} ${SRCS} ${TEST_SRCS} ${LIBS} -lbsd
	./a.out

re: fclean all

