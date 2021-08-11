#include "libft.h"
#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t dst_len;
    size_t src_len;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    i = 0;

	if (size > 0)
	{
		while (i < (size - 1 - dst_len) && src[i])
		{
			dst[dst_len + i] = src[i];
			i++;
		}
    	dst[dst_len + i] = '\0';
	}
	if (dst_len < size)
		return (dst_len + src_len);
	else
		return (src_len);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <bsd/string.h>
// #include <string.h>

// // int main ()
// // {
// //     char *dst;
// //     char *src;
// // 	int res;

// // 	dst = calloc(17, sizeof(char));
// //     src = calloc(7, sizeof(char));
// //     dst = "Mundo bem";
// //     src = "Grande";
// //     printf("src: %s | dest: %s", src, dst);
// //     // res = ft_strlcat(dst, src, 17);
// //     res = strlcat(dst, src, sizeof(src));
// //     printf("\nsrc: %s | dest: %s | res: %d", src, dst, res);
// //     return (0);
// // }


// /*
// #define		STRING_1	"the cake is a lie !\0I'm hidden lol\r\n"
// #define		STRING_4	"phrase differente pour le test"
// #define		STRING_2	"there is no stars in the sky"
// #define		STRING_3	"test basic !"

// */
// int main()
// {
// 	char	*last = "the cake is a lie !\0I'm hidden lol\r\n";
//     char buffer[0xF00] = "there is no stars in the sky";
//     // char last[] = "a potentially long string";
//     int r;
//     size_t	size = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
//     printf("\nft_strlen: %lu | strlen: %lu\n", ft_strlen(last), strlen(last));
//     printf("\nft_strlen: %lu | strlen: %lu\n", ft_strlen(buffer), strlen(buffer));

//     // r = ft_strlcat(buffer, last, size);
//     r = strlcat(buffer,last,size);

//     puts(buffer);
//     printf("\nValue returned: %d\n",r);


//     return(0);
// }