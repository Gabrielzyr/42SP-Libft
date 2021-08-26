#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *new_str;
	size_t i;

	new_str = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!new_str || !s)
		return (0);
	i = 0;
	while (i < ft_strlen(s))
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	return (new_str);
}

// char addOne(unsigned int i, char c) { return (i + c); }
// #include <stdio.h>

// int main()
// {
// 	char *str;

// 	str = ft_strmapi("123", addOne);
// 	printf ("%s\n", str);
// 	return (0);
// }