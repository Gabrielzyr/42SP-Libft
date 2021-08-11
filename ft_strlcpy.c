#include <stdio.h>
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
  	size_t i;
  	size_t src_len;
	
	src_len = ft_strlen(src);
    i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
    	dst[i] = '\0';
	}
    return (src_len);
}

// #include <stdlib.h>
// #include <bsd/string.h>
// #include <string.h>

// int main ()
// {
//     char *dst;
//     char *src;
// 	int res;

// 	dst = calloc(0, sizeof(0));
//     src = calloc(16, sizeof(char));
//     src = "Mundo bem grande";
//     printf("\nsrc: %s | dest: %s", src, dst);
//     res = ft_strlcpy(dst, src, 0);
//     // res = strlcpy(dst, src, 0);
//     printf("\nsrc: %s | dest: %s | res: %d", src, dst, res);
//     return (0);
// }

