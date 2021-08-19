#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// int main()
// {
// 	char *str;
// 	char buff1[0xF00] = "the cake is a lie !\0I'm hidden lol\r\n";
// 	// char buff2[0xF00];

// 	str = "hello world";

// 	ft_putendl_fd(buff1, 2);
// 	// ft_putendl_fd(str, 1);
// 	// ft_putendl_fd((char*)"42", 1);
// 	// ft_putchar_fd('a', 1);
// 	return (0);
// }