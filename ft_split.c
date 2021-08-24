#include "libft.h"
#include <stdio.h>

static size_t ft_count_words(char const *s, char c)
{
	size_t i;
	size_t count;
	size_t new_word;

	count = 0;
	i = 0;
	new_word = 0;

	while (s[i])
	{
		if (s[i] != c && new_word == 0)
		{
			new_word = 1;
			count++;
		}
		else if (s[i] == c)
			new_word = 0;
		i++;
	}
	return (count);
}

static char *ft_fillstr( char *dest, char *src, size_t len)
{
	dest = malloc ((len + 1) * sizeof(char));
	if (!dest || !src)
		free(dest);
	ft_strlcpy(dest, src, len+1);
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


	i = 0;
	words = 0;
	words = ft_count_words(s, c);
temp = 0;
	c_tmp = 0;
	new_str = malloc((words + 1) * sizeof(char *));
	// // printf("count: %lu\n", words);
	// if( words == 0)
	// {
		
	// 	// printf("AQUI\n");
	// 	return (0);
	// }
	if (!s)
		return (0);
	
	temp = malloc(ft_strlen(s) * sizeof(char));

	temp = ft_strdup( s);
	// while (i < words)
	// {
	// 	new_str[i] = ft_calloc(ft_strlen(s), sizeof(char));
	// 	i++;
	// }
	i = 0;
	st = 0;
	while (i < words)
	{
		// // printf("first st: %lu\n", st);
		j = 0 + st;
		st = 0;
		while (j < ft_strlen(temp) + 1)
		{
			if (temp[j] != c && temp[j] != '\0')
			{
				// // printf("TO AQUI\n");
				// printf("c: %c | j:%lu | strlen:%lu\n", temp[j], j, ft_strlen(temp));

				c_tmp = 1;
				st++;
			}
			else if ((temp[j] == c && c_tmp != 0) || (temp[j] == '\0' && c_tmp != 0))
			{
				// printf("TO AQUI\n");
				// // // printf("st aqui: %d\n", (int)(st));
				// printf("c: %c | j:%lu | strlen:%lu\n", temp[j], j, st);
				new_str[i] = ft_fillstr(new_str[i], temp + (j - st), st);
				// // // printf ("teste: %d\n", (int)(j - st));
				st = j;
				j = ft_strlen(temp) + 1;
				c_tmp = 0;
			}
			j++;
		}
		
		i++;
	}
	// // printf("new: %s\n", new_str[0]);
	// // printf("words: %lu\n", words);
	// // // printf("new: %s\n", new_str[1]);
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

// 	new_str = ft_split("tripouille  42  ", ' ');
// 	// new_str = ft_split("chinimala", ' ');
// 	// new_str = ft_split("     ", ' ');
// 	// new_str = ft_split("", ' ');
// 	// if (new_str)
// 	// // printf("ola");
// 	printf("new_str: %s\n", new_str[0]);
// 	printf("new_str2: %s\n", new_str[1]);
// 	return (0);
// }

