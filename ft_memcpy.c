#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *j;
	unsigned char *z;
	size_t i;

	if (!dest && !src)
		return (0);
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
// //    const char src[50] = "http://www.tutorialspoint.com";
// //    const char src[1] = "";
// //    char dest[1];
// //    strcpy(dest,"Heloooo!!");
// //    printf("Before memcpy dest = %s\n", dest);
// 	ft_memcpy(0, 0, 3);
// 	memcpy(0, 0, 3);
// //    printf("After memcpy dest = %s\n", dest);
   
//    return(0);
// }