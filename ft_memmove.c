#include "libft.h"
 
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *new_dest;
	const char *new_src;
	
	if (!dest && !src)
		return (0);
	new_dest = dest;
	new_src = (void *)src;
	if (ft_strncmp((char *)new_dest, (char *)new_src, ft_strlen(new_src)) < 0)
	{
		while (n--)
			new_dest[n] = new_src[n];
		return (new_dest);
	}
	else
		ft_memcpy(new_dest, new_src, n);
	return (new_dest);
}

// #include    "libft.h"
// #include    <stdio.h>
// #include    <string.h>

// int    main(void)
// {
//     char    arr1[10] = "Ola";
//     char    arr2[10] = "Hello";
//     char    arr3[10] = "Ola 42";
//     char    arr4[10] = "Hola";
    
//     printf("Copy 2 bytes from arr2 to arr1\narr1 = %s | arr2 = %s\n", arr1, arr2);
//     printf("ft_memmove: %s\n", ft_memmove(arr1, arr2, 2));
//     printf("memmove: %s\n", memmove(arr1, arr2, 2));
//     printf("Result: %s\n\n", arr1);
//     printf("Copy 3 bytes from arr3 to arr3[6]\narr3 = %s\n", arr3);
//     printf("ft_memmove: %s\n", ft_memmove(arr3 + 6, arr3, 3));
//     printf("memmove: %s\n", memmove(arr3 + 6, arr3, 3));
//     printf("Result: %s\n\n", arr3);
//     printf("Copy 4 bytes from arr3 to arr1\narr4 = %s | arr1 = %s\n", arr4, arr1);
//     printf("ft_memmove: %s\n", ft_memmove(arr1 + 2, arr4, 4));
//     printf("memmove: %s\n", memmove(arr1 + 2, arr4, 4));
//     printf("Result: %s\n\n", arr1);
//     printf("Copy 2 bytes from arr1 to arr1[2]\narr1 = %s\n", arr1);
//     printf("ft_memmove: %s\n", ft_memmove(arr1 + 2, arr1, 2));
//     printf("memmove: %s\n", memmove(arr1 + 2, arr1, 2));
//     printf("Result: %s\n", arr1);
// }


// int main ()
// {
// 		char dest[] = "olddest";
//     	char src[]  = "newstring";

// 	printf("src: %p | dest: %p\n", src, dest);
//    printf("Before memmove dest = %s, src = %s\n", dest, src);
//    ft_memmove(dest, src, 2);
//    printf("After memmove dest = %s, src = %s\n", dest, src);

//    return(0);
// }