#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *new_str;
	size_t s1_len;
	size_t s2_len;

	if (!s1)
		return ((char *)s2);
	else if (!s2)
		return ((char *)s1);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_str = ft_calloc((s1_len + s2_len + 1), sizeof(char));
	if (!new_str)
		return (0);
	ft_memcpy(new_str, s1, s1_len);
	ft_strlcat(new_str, s2, (s1_len+s2_len + 1));
	return (new_str);
}

// #include <stdio.h>

// int main()
// {
// 	char *new_str;

// 	new_str = ft_strjoin("Hello", " Word");
// 	printf("new_str: %s", new_str);
// 	return (0);
// }
