#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*find_l;
	size_t	i;
	size_t	count;

	if (!little)
		return ((char *)big);
	i = 0;
	count = 0;
	find_l = (char *)little;
	while (i < (len - 1) && count < ft_strlen(find_l))
	{
		if ((char)find_l[count] == (char)big[i])
			count++;
		else if (count > 0)
			count = 0;
		i++;
	}
	if (count == ft_strlen(find_l))
		find_l = (char *)big + (i - count);
	if (find_l)
		return (find_l);
	return (0);
}

#include <stdio.h>
#include <bsd/string.h>
#include <string.h>

int main()
{
	char *big = "String grande aqui";
	char *little = "grande";
	char *find;
			// printf("%c\n", big[4]);

	find = ft_strnstr(big, little, 15);
	// find = (char *)strnstr(big, little, 15);
	printf("big: %s | little: %s | find: %s", big, little, find);
	return (0);
}
