#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *new_s1;
	unsigned char *new_s2;

	if (n == 0)
		return (0);
	new_s1 = (unsigned char *)s1;
	new_s2 = (unsigned char *)s2;
	while (n-- && new_s1 && new_s2)
	{
		if (*new_s1 != *new_s2)
			return (*new_s1 - *new_s2);
		new_s1++;
		new_s2++;
	}
	return (*new_s1 - *new_s2);
}

// #include <stdio.h>
// #include <string.h>

// int main () {
//    char *str = "abcdef";
//    char *str2 = "abCdef";
//    int i;
//    int j;

//    i = memcmp(str, str2, 4);
//    j = ft_memcmp(str, str2, 4);

//   printf("strncmp: %d | ft_strncmp: %d\n", i, j);
   
//    return(0);
// }