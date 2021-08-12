#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t i;
	unsigned char *j;

	i = 0;
	j = s;
	while (i < n)
	{
		j[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	char str[] = "almost every programmer should know memset!";
// 	// int st1r[] = {'1', 'a', 'c'};
// 	ft_memset (str,'-',6);
// 	puts (str);
// 	// puts (st1r);
// 	return (0);
// }