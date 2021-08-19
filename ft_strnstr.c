#include "libft.h"
#include <stdio.h>

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

// #include <stdio.h>
// #include <bsd/string.h>
// #include <string.h>

// int main()
// {
// 	char *big = "Str grande ing grande aqui grande";
// 	char *little = "grande";
// 	char *find;
// 		char haystack[30] = "aaabcabcd";
// 	char needle[10] = "aabc";
// 			// printf("%c\n", big[4]);
// 	// find = ft_strnstr(big, little, 7);
// 	// find = (char *)strnstr(big, little, 7);
	
// 	// find = ft_strnstr(big, big, strlen(big));
// 	find = ft_strnstr(haystack, needle, -1);
// 	// find = strnstr(haystack, needle, -1);
// 	// find = ft_strnstr(haystack, "abcd", 9);
// 	// find = strnstr(haystack, "abcd", 9);
// 	// find = (char *)strnstr(big, big, strlen(big));

// 	printf("big: %s | little: %s | find: %s | strlen: %lu\n", big, little, find, strlen(big));
// 	return (0);
// }
