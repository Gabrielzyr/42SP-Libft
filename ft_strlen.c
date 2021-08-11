#include <stdio.h>

size_t ft_strlen(const char *s)
{
  size_t i;

  i = 0;
  while (s[i])
    i++;
  return (i);
}


// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   char *str;
//   str = "Olá mundo";
  
//   printf("Strlen: %lu\nft_strlen: %lu", strlen(str), ft_strlen(str));
//   return (0);
// }