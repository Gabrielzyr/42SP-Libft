#include "libft.h"

void*ft_memchr(const void *s, int c, size_t n)
{   
	unsigned char *new_s;

	new_s = (unsigned char *)s;
	while(n--)
	{   
		if(*new_s == (unsigned char)c)
			return(new_s);
		new_s++;
	}
	return(0);
}


// #include <stdio.h>
// #include <string.h>

// int main () {
//    const char str[] = "http://www.tutorialspoint.com";
//    const char ch = '.';
//    unsigned char *ret;

//    ret = memchr(str, (int)ch, 13);

//    printf("String after |%c| is - |%s|\n", ch, ret);
   
//    return(0);
// }
