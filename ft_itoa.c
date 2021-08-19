#include "libft.h"
#include <stdio.h>

static int	ft_getnbrsize(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 10)
	{
		n = n / 10;
		i++;
	}
	i += 1;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		i;

	size = ft_getnbrsize(n);
	str = malloc(size);
	if (!str)
		return (0);
	i = 0;
	while (i < size)
	{
		if (n < 0)
		{
			str[i] = '-';
			n *= -1;
		}
		else
		{
			str[i] = (n % 10) + '0';
			n = (n / 10);
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char *str;

// 	str = ft_itoa(-545);
// 	printf("str: %s", str);
// 	return (0);
// }
