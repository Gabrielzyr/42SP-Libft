unsigned long int ft_strlcpy(char *dst, const char *src, unsigned long int size)
{
  unsigned long int i;

    i = 0;
    while (i < size - 1 && src[i])
    {
      dst[i] = src[i];
      i++;
    }
    dst[i] = '\0';
    return (size);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <bsd/string.h>
// #include <string.h>

// int main ()
// {
//     char *dst;
//     char *src;

// 	dst = calloc(10, sizeof(char));
//     src = calloc(16, sizeof(char));
//     src = "Mundo bem grande";
//     printf("src: %s | dest: %s", src, dst);
//     ft_strlcpy(dst, src, sizeof(src));
//     // strlcpy(dst, src, sizeof(src));
//     printf("\nsrc: %s | dest: %s", src, dst);
//     return (0);
// }

