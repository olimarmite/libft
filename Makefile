CC=gcc
CFLAGS=-Wall -Wextra -Werror
LIBS=libft.h
SRCS=ft_bzero.c  ft_isalnum.c  ft_isalpha.c  ft_isascii.c  ft_isdigit.c \
	ft_isprint.c  ft_memcpy.c  ft_memset.c  ft_strlen.c ft_strnstr.c \
	ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
	ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c
	
BONUS_SRCS= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear.c
BONUS_OBJS= ${BONUS_SRCS:.c=.o}
TEST_SRCS = ./test/*.c
NAME=libft.a
OBJS= ${SRCS:.c=.o} #${LIBS:.h=.h.gch}

RM = rm -f

all: ${NAME}

${NAME}:
	${CC} -c ${CFLAGS} ${SRCS} 
	ar -rc ${NAME} ${OBJS}

bonus:
	${CC} -c ${CFLAGS} ${SRCS} ${BONUS_SRCS}
	ar -rc ${NAME} ${BONUS_OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}
	${RM} a.out


test: fclean
	${CC} ${SRCS} ${TEST_SRCS} ${LIBS} -lbsd
	./a.out

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles - -shared -o libft.so $(OBJS)