#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*new_str;

	new_str = malloc(nmemb * size);
	if (!new_str)
		return (0);
	ft_bzero(new_str, nmemb * size);
	return (new_str);
}
