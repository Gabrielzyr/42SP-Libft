#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	st;
	size_t	s_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	st = (size_t)start;
	if (st >= s_len)
		len = 0;
	else if (len > (s_len - st))
		len = s_len - st;
	new_str = ft_calloc(len + 1, sizeof(char));
	if (!new_str)
		return (0);
	i = 0;
	while (i < len && s[st + i])
	{
		new_str[i] = s[st + i];
		i++;
	}
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
