

#include "includes/libft.h"

int		ft_atoi(const char *str)
{
	unsigned long long int	nb;
	int						i;
	int						k;

	i = 0;
	k = 1;
	nb = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '-')
		k *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		nb = nb * 10 + str[i++] - 48;
	if (nb > 9223372036854775807)
	{
		if (k > 0)
			return (-1);
		else
			return (0);
	}
	return ((int)nb * k);
}
