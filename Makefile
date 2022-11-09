CC=gcc
CFLAGS=-Wall -Wextra -Werror
SRCS=ft_bzero.c  ft_isalnum.c  ft_isalpha.c  ft_isascii.c  ft_isdigit.c  ft_isprint.c  ft_memcpy.c  ft_memset.c  ft_strlen.c libft.h
TARGET=libft
OBJS= $(SRCS:.c=.o)

RM = rm -f


all:
	ar -rcu ${TARGET}.a ${OBJS}

fclean:
	${RM} ${OBJS}
