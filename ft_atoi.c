int	ft_atoi(const char *nptr)
{
	int			i;
	long int	number;
	int			sign;
    
	i = 0;
	number = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	sign = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while(nptr[i] >= '0' && nptr[i] <= '9')
	{
		number = (number * 10) + (nptr[i] - '0');
		i++;
	}
	return (number * sign);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//   printf("atoi: %d\nft_atoi: %d", atoi("   +3+4"), ft_atoi("+3+4"));
//   printf("\natoi: %d\nft_atoi: %d", atoi("   +21474836478"), ft_atoi("   +21474836478"));
//   printf("\natoi: %d\nft_atoi: %d", atoi("   -21474836488"), ft_atoi("   -21474836488"));
//   return (0);
// }