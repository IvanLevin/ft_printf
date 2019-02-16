

#include "ft_printf.h"

int		ft_len(__int128_t n)
{
	int		check;

	check = 0;
	if (n < 0)
	{
		check++;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		check++;
	}
	if (n == 0 && check == 0)
		check++;
	return (check);
}

char	*ft_itoa_long(long double n)
{
	char			*arr_itoa;
	int				sign;
	long long		len;
	__int128_t		k;

	k = (__int128_t)n;
	len = 0;
	len = ft_len(k);
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		k = -k;
	}
	if (!(arr_itoa = ((char *)malloc(sizeof(char) * len + 1))))
		return (NULL);
	arr_itoa[len--] = '\0';
	while (len >= 0)
	{
		arr_itoa[len--] = (char)((k % 10) + '0');
		k = k / 10;
	}
	if (sign == 1)
		arr_itoa[0] = '-';
	return (arr_itoa);
}

