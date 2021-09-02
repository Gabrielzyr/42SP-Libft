#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*j;
	unsigned char	*z;
	size_t			i;

	if (!dest && !src)
		return (0);
	j = dest;
	z = (void *)src;
	i = 0;
	while (i < n)
	{
		j[i] = z[i];
		i++;
	}
	return (dest);
}
