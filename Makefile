CC=cc
NAME = libft.a
CFLAGS=-Wall -Wextra -Werror -g
LIBS=libft.h
SRCS=ft_bzero.c  ft_isalnum.c  ft_isalpha.c  ft_isascii.c  ft_isdigit.c \
	ft_isprint.c  ft_memcpy.c  ft_memset.c  ft_strlen.c ft_strnstr.c \
	ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
	ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c

BONUS_SRCS= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
	ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
	ft_lstmap.c
BONUS_OBJS= ${BONUS_SRCS:.c=.o}

OBJS= ${SRCS:.c=.o}
INC = ./inc
RM = rm -rf

all: ${NAME}


${NAME}: ${OBJS}
	ar -rc ${NAME} ${OBJS}

.c.o:
	${CC} -c ${CFLAGS} -I $(INC) $<

bonus: ${BONUS_OBJS}
	ar -rc ${NAME} ${BONUS_OBJS}

clean:
	${RM} ${OBJS} ${BONUS_OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all bonus clean fclean re
