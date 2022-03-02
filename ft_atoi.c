#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	oddoreven;
	int	num;

	i = 0;
	num = 0;
	oddoreven = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	if (str[i] == 43 || str[i] == 45)
	{
		if (str [i] == 45)
		{
			oddoreven = -oddoreven;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (str[i] - '0') + (num * 10);
		i++;
	}
	return (num * oddoreven);
}
