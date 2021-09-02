#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*new_s;

	new_s = (unsigned char *)s;
	while (n--)
	{
		if (*new_s == (unsigned char)c)
			return (new_s);
		new_s++;
	}
	return (0);
}
