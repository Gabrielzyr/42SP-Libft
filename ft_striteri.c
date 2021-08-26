#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t i;

	if(!s)
		return ;
	i = 0;
	while (i < ft_strlen(s))
	{
		f(i, &s[i]);
		i++;
	}
}

// char addOne(unsigned int i, char c) { return (i + c); }
// #include <stdio.h>

// int main()
// {
// 	char *str;

// 	str = ft_striteri("123", addOne);
// 	printf("%s\n", str);
// 	return (0);
// }