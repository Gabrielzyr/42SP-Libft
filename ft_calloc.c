#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	char *new_str;

	new_str = malloc(nmemb);
	if (new_str)
	{
		if (size == 0)
			ft_bzero(new_str, size);
		else
			ft_bzero(new_str, nmemb);
	}
	return (new_str);
}

// #include <stdio.h>
// int main()
// {
// 	int *new_str;
// 	int i;
// 	int n;

// 	i = 5;
// 	// new_str = (int *)ft_calloc(i, sizeof(int));
// 	// new_str = (int *)calloc(i, sizeof(int));
// 	new_str = (int *)ft_calloc(i, 0);
// 	// new_str = (int *)calloc(i, 0);
// 	if (new_str == NULL)
// 		printf("fail\n");
// 	else
// 	{
// 		for (n = 0; n < i; n++)
// 			printf("%d", new_str[i]);
// 		printf("foi\n");
// 	}
// 	return (0);
// }
