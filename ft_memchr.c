#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *new_s;
	unsigned char *find;
	size_t i;

	new_s = (void *)s;
	i = 0;
	find = 0;
	while (new_s[i] && i < n)
	{
		if (new_s[i] == c)
		{
			find = &new_s[i];
			return (find);
		}
		i++;
	}

	return (find);
}

#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   unsigned char *ret;

   ret = ft_memchr(str, (int)ch, 13);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}
