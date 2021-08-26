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

static char *ft_fillstr(char *dest, char *src, size_t len)
{
	dest = ft_calloc((len + 1), sizeof(char));
	if (!dest || !src)
		return (0);
	ft_strlcpy(dest, src, len + 1);
	return (dest);
}

static char **ft_fill(char **new_str, char const *s, size_t words, char c)
{
	int c_tmp;
	size_t i;
	size_t st;
	size_t j;

	i = 0;
	c_tmp = 0;
	st = 0;
	while (i < words)
	{
		j = 0 + st;
		st = 0;
		while (j < ft_strlen((char *)s) + 1)
		{
			if ((char)s[j] != c && (char)s[j] != '\0')
			{
				c_tmp = 1;
				st++;
			}
			else if (((char)s[j] == c && c_tmp != 0) || ((char)s[j] == '\0' && c_tmp != 0))
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
	return (new_str);
}

char **ft_split(char const *s, char c)
{
	char **new_str;
	size_t i;
	size_t words;

	if (!s)
		return (0);
	words = 0;
	words = ft_count_words(s, c);
	new_str = ft_calloc((words + 1), sizeof(char *));
	ft_fill(new_str, s, words, c);
	printf("words: %lu", words);
	if (!new_str)
	{
		i = 0;
		while (i < words)
		{
			free(new_str[i]);
			i++;
		}
		free(new_str);
		return (0);
	}
	return (new_str);
}

#include <stdio.h>

int main(void)
{
	// char *str = "1-2-3-4-5-6-7-8--8-8--8-4------4--4";
	char *str = "      spslit       this for   me  a       ";
	char sep = ' ';
	char **ptr = ft_split(str, sep);
	int i;

	i = 0;
	if (!ptr)
		printf("a");
	else
		printf("b");
	// printf("result: %zu\n", ft_strlen(*ptr));
	// while (ptr[i] != 0)
	// {
	// 	printf("%s", ptr[i]);
	// 	printf("%zu\n", ft_strlen(ptr[i]));
	// 	i++;
	// }
	// printf("%s", ptr[i]);
return (0);
}