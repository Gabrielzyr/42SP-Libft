SRCS = ft_isascii.c ft_isalnum.c ft_isprint.c ft_atoi.c ft_isdigit.c ft_isalpha.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_tolower.c ft_toupper.c\
 ft_strncmp.c ft_strdup.c ft_strchr.c ft_strrchr.c ft_memset.c ft_bzero.c ft_memcpy.c

OBJS = ${SRCS:.c=.o}

NAME = libft.a

HEADRS = libft.h

CC = gcc 

CFLAGS = -Wall -Werror -Wextra

# .c.o:
# 	${CC} ${CFLAGS} ${SRCS}

${NAME}: ${OBJS} ${HEADRS}
	ar -crs ${NAME} ${OBJS}

all: ${NAME}

clean: 
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all