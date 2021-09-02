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
		if (sign == 1 && number > 2147483647)
			return (-1);
		if ( sign == -1 && (number) > 2147483648)
			return (0);
	}
	return ((int)number * sign);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
//   printf("atoi: %d\nft_atoi: %d", atoi("   +3+4"), ft_atoi("+3+4"));
printf("\natoi: %d\nft_atoi: %d", atoi("   -21474836477"), ft_atoi("   -21474836477"));
// printf("\natoi: %d\nft_atoi: %d", atoi("   -99999999999999999999999999"), ft_atoi("   -99999999999999999999999999"));
// //   printf("\natoi: %d\nft_atoi: %d", atoi("-99999999999999999999999999"), ft_atoi("-99999999999999999999999999"));
//   printf("\natoi: %d\nft_atoi: %d", atoi("99999999999999999999999999"), ft_atoi("99999999999999999999999999"));
  return (0);
}