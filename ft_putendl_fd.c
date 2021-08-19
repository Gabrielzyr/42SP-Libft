#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

int main()
{
	char *str;

	str = "hello world";
	// ft_putendl_fd(str, 1);
	// ft_putendl_fd((char*)"42", 1);
	// ft_putchar_fd('a', 1);
	return (0);
}