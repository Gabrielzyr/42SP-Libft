#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	s_len = ft_strlen(s);
    while(s_len >= 0)
	{   
		if(c == s[s_len]) 
			return ((char *)&s[s_len]);
    	s_len--;
	}
	return(0);
}
