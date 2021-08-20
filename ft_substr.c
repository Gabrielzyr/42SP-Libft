#include "libft.h"
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *new_str;
	size_t i;
	size_t st;
	size_t s_len;

	s_len = ft_strlen(s);
	new_str = ft_calloc(len + 1, sizeof(char));
	if (new_str == 0 || s_len == 0)
		return (0);
	st = (size_t)start;
	i = 0;
	while (i < len && s[st+i])
	{
		new_str[i] = s[st+i];
		i++;
	}
	// new_str[ft_strlen(new_str)] = '\0';
	printf("a: %lu\n", ft_strlen(new_str));
	return (new_str);
}

// #include <stdio.h>

// int main()
// {
// 	char *str = "Test if";
// 	char *new_str;

// 	// new_str = ft_substr(str, 3, 7);
// 	new_str = ft_substr("tripouille", 100, 1);
// 	printf("str: %s | new_str: %s\n", str, new_str);
// 	return (0);
// }
