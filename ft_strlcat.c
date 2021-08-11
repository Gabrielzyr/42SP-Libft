#include "libft.h"
unsigned int ft_strlcat(char *dst, const char *src, unsigned int size)
{
    unsigned int i;
    unsigned int d_size;
    unsigned int s_size;

    d_size = ft_strlen(dst);
    s_size = ft_strlen((char *)src);
    i = 0;

    while (d_size < size - 1 && src[i])
    {
      dst[d_size + i] = src[i];
      i++;
    }
    // while (i < size - 1)
    // {
    //     dst[i] = '\0';
    //     i++;
    // }    
    dst[d_size + i] = '\0';
    // srcsize=ft_strlen(src);
    return (d_size+s_size);
}

#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>
#include <string.h>

int main ()
{
    char *dst;
    char *src;

	dst = calloc(17, sizeof(char));
    src = calloc(7, sizeof(char));
    dst = "Mundo bem";
    src = "Grande";
    printf("src: %s | dest: %s", src, dst);
    // ft_strlcat(dst, src, sizeof(src));
    strlcat(dst, src, sizeof(src));
    printf("\nsrc: %s | dest: %s", src, dst);
    return (0);
}

