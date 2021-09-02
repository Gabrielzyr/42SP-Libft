#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*j;

	i = 0;
	j = s;
	while (i < n)
	{
		j[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
