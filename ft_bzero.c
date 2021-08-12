#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}


// #include <string.h>
// #include <stdio.h>

// int main()
// {
// 	char str[] = "almost every programmer should know memset!";
// 	// int st1r[] = {'1', 'a', 'c'};
// 	bzero (str,6);
// 	puts (str);
// 	// puts (st1r);
// 	return (0);
// }