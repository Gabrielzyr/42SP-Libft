#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*find_l;
	size_t	i;
	size_t	count;
	size_t	lt_len;

	lt_len = ft_strlen(little);
	if (little == '\0' || little == 0 || lt_len == 0)
		return ((char *)big);
	i = 0;
	count = 0;
	find_l = (char *)little;
	while ((char)big[i] && i < len && count < lt_len)
	{
		if ((char)find_l[count] == (char)big[i])
			count++;
		else if (count > 0)
			count = 0;
		i++;
	}
	if (count == lt_len)
	{
		find_l = (char *)big + (i - count);
		return (find_l);
	}
	return (0);
}

// #include <stdio.h>
// #include <bsd/string.h>
// #include <string.h>

// int main()
// {
// 	char *big = "Str grande ing grande aqui grande";
// 	char *little = "grande";
// 	char *find;
// 			// printf("%c\n", big[4]);
// 	// find = ft_strnstr(big, little, 7);
// 	// find = (char *)strnstr(big, little, 7);
	
// 	find = ft_strnstr(big, big, strlen(big));
// 	// find = (char *)strnstr(big, big, strlen(big));

// 	printf("big: %s | little: %s | find: %s | strlen: %lu\n", big, little, find, strlen(big));
// 	return (0);
// }
