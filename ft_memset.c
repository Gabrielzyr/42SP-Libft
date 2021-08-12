#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t i;
	unsigned char *j;

	i = 0;
	while (i < n)
	{
		j = s;
		j[i] = (unsigned char)c;
		i++;
	}
	return (j);
}


// int main()
// {
// 	char str[] = "almost every programmer should know memset!";
// 	// int st1r[] = {'1', 'a', 'c'};
// 	ft_memset (str,'-',6);
// 	puts (str);
// 	// puts (st1r);
// 	return (0);
// }