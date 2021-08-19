#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		while (*s)
		{
			ft_putchar_fd(*s, fd);
			s++;
		}
}

// int main()
// {
// 	char *str;

// 	str = "hello world";
// 	ft_putstr_fd(str, 1);
// 	return (0);
// }