#ifndef LIBFT_H
# define LIBFT_H
#include <stdlib.h>
#include <unistd.h>

int ft_atoi(int c);
int ft_isascii(int c);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *str);
int ft_toupper(int c);
int ft_tolower(int c);
void *ft_memset(void *s, int c, size_t n);
char *ft_strdup(const char *s);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);

// strnstr
// memcmp
// calloc

#endif
// ar -crs libft.a ft_atoi.o ft_isalnum.o ft_isalpha.o ft_isdigit.o ft_isprint.o ft_strlen.o