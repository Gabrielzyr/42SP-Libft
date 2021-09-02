#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	s_len;

	s_len = ft_strlen(s);
	if (s_len != 0)
		while (s_len >= 0)
		{   
			if ((char)c == s[s_len]) 
				return ((char *)s + s_len);
			s_len--;
		}
	return (0);
}
