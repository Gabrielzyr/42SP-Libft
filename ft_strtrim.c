#include "libft.h"
#include <stdio.h>

static size_t	ft_get_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	start;

	start = 0;
	i = 0;
	j = 0;
	while (i < ft_strlen(s1))
	{
		j = 0;
		while (j < ft_strlen(set))
		{
			if (s1[start] == set[j])
			{
				start++;
				j = ft_strlen(set);
			}
			j++;
		}
		i++;
	}
	return (start);
}

static size_t	ft_get_last(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	last;

	i = 0;
	j = 0;
	last = ft_strlen(s1);
	while (i < ft_strlen(s1))
	{
		j = 0;
		while (j < ft_strlen(set))
		{
			if (s1[last - 1] == set[j])
			{
				last--;
				j = ft_strlen(set);
			}
			j++;
		}
		i++;
	}
	return (last);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	start;
	size_t	last;
	if (!s1 || !set)
		return (0);
	start = ft_get_start(s1, set);
	last = ft_get_last(s1, set);
	if (last <= start)
		new_str = ft_calloc(1, sizeof(char));
	else
		new_str = ft_calloc(last - start + 1, sizeof(char));
	if (!new_str)
		return (0);
	else if (!(last > 0))
		return (new_str);
	if (last > 0)
		ft_memcpy(new_str, (s1 + start), (last - start));
	if (new_str)
		return (new_str);
	return (0);
}

// #include <stdio.h>

// int main()
// {
// 	char *new_str;

// 	// new_str = ft_strtrim(" a Hello Great Word oa", " oa");
// 	new_str = ft_strtrim("   xxx   xxx", " x");
// 	printf("new_str: %s", new_str);
// 	return (0);
// }