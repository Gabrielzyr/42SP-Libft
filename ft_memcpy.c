#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *j;
	unsigned char *z;
	size_t i;

	j = dest;
	z = (void *)src;
	i = 0;
	while (i < n)
	{
		j[i] = z[i];
		i++;
	}
	return (dest);
}


// #include <stdio.h>
// #include <string.h>

// int main () {
//    const char src[50] = "http://www.tutorialspoint.com";
//    char dest[50];
//    strcpy(dest,"Heloooo!!");
//    printf("Before memcpy dest = %s\n", dest);
//    ft_memcpy(dest, src, strlen(src)+1);
//    printf("After memcpy dest = %s\n", dest);
   
//    return(0);
// }