#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	char *new_str;

	if (nmemb == 0 || size == 0)
		return (0);
	new_str = malloc(nmemb + 1);	
	ft_bzero(new_str, nmemb);
	return (new_str);
}

// #include <stdio.h>

// int main()
// {
// 	char *new_str;

// 	new_str = ft_calloc(10, 1);
// 	printf("str: %s\n", new_str);
// 	return (0);
// }
