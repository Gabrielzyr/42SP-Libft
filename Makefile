SRCS = ft_isascii.c ft_isalnum.c ft_isprint.c ft_atoi.c ft_isdigit.c ft_isalpha.c\
ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_tolower.c ft_toupper.c ft_strncmp.c ft_strdup.c\
ft_strchr.c ft_strrchr.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c\
ft_memcmp.c ft_calloc.c ft_strnstr.c ft_putchar_fd.c ft_putstr_fd.c\
ft_putnbr_fd.c ft_putendl_fd.c ft_itoa.c ft_substr.c ft_strjoin.c ft_strtrim.c\
ft_split.c ft_strmapi.c ft_striteri.c

# bonus part
BONUS = ft_lstnew.c ft_lstadd_front.c

B_OBJS = ${BONUS:.c=.o}

OBJS = ${SRCS:.c=.o}

NAME = libft.a

HEADRS = libft.h

CC = clang 

CFLAGS = -Wall -Werror -Wextra


${NAME}: ${OBJS} ${HEADRS}
	ar -crs ${NAME} ${OBJS}

bonus: ${B_OBJS} ${HEADRS}
	${CC} ${CFLAGS} -c ${BONUS}
	ar -crs ${NAME} ${B_OBJS}

all: ${NAME}

clean: 
	rm -f ${OBJS}
	rm -f ${B_OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all