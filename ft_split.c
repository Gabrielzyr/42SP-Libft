#include "libft.h"
#include <stdio.h>

static size_t ft_count_words(char const *s, char c)
{
	size_t count;
	size_t new_word;

	count = 0;
	new_word = 0;
	while (*s)
	{
		if (*s != c && new_word == 0)
		{
			new_word = 1;
			count++;
		}
		else if (*s == c)
			new_word = 0;
		s++;
	}
	return (count);
}

static char *ft_fillstr( char *dest, char *src, size_t len)
{
	dest = ft_calloc ((len + 1), sizeof(char));
	if (!dest || !src)
		return(0);
	ft_strlcpy(dest, src, len+1);
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**new_str;
	int c_tmp;
	size_t i;
	size_t st;
	size_t 	j;
	size_t	words;

	i = 0;
	words = 0;
	words = ft_count_words(s, c);
	c_tmp = 0;
	new_str = ft_calloc((words + 1), sizeof(char *));
	if (!s)
		return (0);
	i = 0;
	st = 0;
	while (i < words)
	{
		j = 0 + st;
		st = 0;
		while (j < ft_strlen((char *)s) + 1)
		{
			if ((char )s[j] != c && (char )s[j] != '\0')
			{
				c_tmp = 1;
				st++;
			}
			else if (((char )s[j] == c && c_tmp != 0) || ((char )s[j] == '\0' && c_tmp != 0))
			{
				new_str[i] = ft_fillstr(new_str[i], (char *)s + (j - st), st);
				st = j;
				j = ft_strlen((char *)s) + 1;
				c_tmp = 0;
			}
			j++;
		}
		i++;
	}
	if (!new_str)
	{
		i = 0;
		while (i < words)
		{
			free(new_str[i]);
		}
		free(new_str);
	}
	i = 0;
	return (new_str);
}

// #include <stdio.h>

// int main()
// {
// 	char **new_str;

// 	new_str = ft_split("tripouille  42  ", ' ');(char *)
// 	// new_str = ft_split("chinimala", ' ');
// 	// new_str = ft_split("     ", ' ');
// 	// new_str = ft_split("", ' ');
// 	// if (new_str)
// 	// // printf("ola");
// 	printf("new_str: %s\n", new_str[0]);
// 	printf("new_str2: %s\n", new_str[1]);
// 	return (0);
// }
