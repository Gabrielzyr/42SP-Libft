#include "libft.h"
#include <stdio.h>

static size_t ft_count_words(char const *s, char c)
{
	size_t i;
	size_t count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && s[i + 1] == c)
			count++;
		i++;
	}
	return (count);
}

static char *ft_fillstr( char *dest, char *src, size_t len)
{
	dest = ft_calloc(len + 1,sizeof(char));
	if (dest)
		ft_memcpy(dest, src, len);
	else
		free(dest);
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**new_str;
	char *temp;
	int c_tmp;
	size_t i;
	size_t st;
	size_t 	j;
	size_t	words;

	temp = ft_calloc(ft_strlen(s), sizeof(char));
	if (!temp)
		return (0);
	i = 0;
	words = ft_count_words(s, c);
	c_tmp = 0;
	ft_memcpy(temp, s, ft_strlen(s));
	new_str = ft_calloc(words + 1, sizeof(char));
	while (i < words)
	{
		new_str[i] = ft_calloc(ft_strlen(s), sizeof(char));
		i++;
	}
	i = 0;
	st = 0;
	while (i < words)
	{
		printf("first st: %lu\n", st);
		j = 0 + st;
		st = 0;
		while (temp[j])
		{
			if (temp[j] != c)
			{
				c_tmp = 1;
				st++;
			}
			else if (temp[j] == c && c_tmp != 0)
			{
				new_str[i] = ft_fillstr(new_str[i], temp + (j - st), st);
				printf ("teste: %d\n", (int)(j - st));
				st = j;
				j = ft_strlen(temp);
				c_tmp = 0;
			}
			j++;
		}
		i++;
	}
	printf("new: %s\n", new_str[0]);
	if (new_str[0] == 0)
	{
		free(new_str);
	}
	i = 0;
	return (new_str);
}

// #include <stdio.h>

// int main()
// {
// 	char **new_str;

// 	new_str = ft_split("  tripouille  42  ", ' ');
// 	// if (new_str)
// 		// printf("ola");
// 	printf("new_str: %s\n", new_str[0]);
// 	return (0);
// }