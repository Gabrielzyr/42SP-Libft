#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	ft_putchar_fd(*s, fd);
	while (*s++)
		ft_putchar_fd(*s, fd);
}

// int main()
// {
// 	char *str;

// 	str = "hello world";
// 	ft_putstr_fd(str, 1);
// 	return (0);
// }