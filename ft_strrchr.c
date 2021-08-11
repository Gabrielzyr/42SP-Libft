#include "libft.h"
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
	char	*find;
	size_t	s_len;

	find = 0;
	s_len = ft_strlen((char *)s);
	if(c == '\0')
	{
		find = (char*)&s[s_len];
		return (find);
	}
    while(s[s_len] && s_len >= 0)
	{   
		if(c == s[s_len]) 
			find = (char*)&s[s_len];
    	s_len--;
	}
	return(find);
}
