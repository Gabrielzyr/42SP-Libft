#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*find_l;
	size_t	i;
	size_t	lt_len;

	lt_len = ft_strlen(little);
	if (lt_len == 0)
		return ((char *)big);
	i = 0;
	find_l = (char *)little;
	while ((char)big[i] && lt_len <= len )
	{
		if (ft_strncmp(&big[i], find_l,lt_len) == 0)
			return ((char *)&big[i]);
		i++;
		len--;
	}
	return (0);
}
