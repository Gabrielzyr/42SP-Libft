#include "libft.h"

static int	ft_getnbrsize(long long int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	i += 1;
	return (i);
}

static char	*ft_fillstr(char *str, int n, int size)
{
	int	i;

	i = 0;
	while (i < (size))
	{
		if (str[(size - i) - 1] != '-')
			str[(size - i) - 1] = (n % 10) + '0';
		n = (n / 10);
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;

	size = ft_getnbrsize(n);
	str = malloc(size + 1);
	if (!str)
		return (0);
	if (n < 0)
	{
		str[0] = '-';
		if (n == -2147483648)
		{
			str[size - 1] = '8';
			n = n / 10;
			size -= 1;
		}
		n *= -1;
	}
	ft_fillstr(str, n, size);
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char *str;

// 	str = ft_itoa(-2147483648);
// 	printf("str: %s", str);
// 	return (0);
// }
