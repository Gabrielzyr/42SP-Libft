#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(const char *s)
{
	char *dup;
	size_t i;

	dup = malloc(ft_strlen((char *)s) + 1);
	if(dup == NULL)
    	return(0);
	i = 0;
	while (s[i])
		{
			dup[i] = s[i];
			i++;
		}
		dup[i] = '\0';
	return (dup);

}

// int main()
// {
// 	char *new = NULL;
// 	char *src;

// 	src = "ola mundo";
// 	printf("src: %s, new: %s\n", src, new);
// 	new = ft_strdup(src);
// 	printf("src: %s, new: %s\n", src, new);
// 	return (0);
// }
