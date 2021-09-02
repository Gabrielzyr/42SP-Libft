#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*new_dest;
	unsigned char	*new_src;

	if (!dest && !src)
		return (0);
	new_dest = dest;
	new_src = (void *)src;
	if (new_dest > new_src)
	{
		while (n--)
			new_dest[n] = new_src[n];
		return (new_dest);
	}
	else
		ft_memcpy(new_dest, new_src, n);
	return (new_dest);
}
