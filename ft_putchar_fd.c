#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (!c)
		return ;
	write (fd, &c, 1);
}

// int main()
// {
// 	char c;

// 	c = 'a';
// 	ft_putchar_fd(c, 0);
// 	return (0);
// }