
#include "includes/libft.h"

void	ft_hex(int n)
{
	if (n >= 16)
		ft_hex(n / 16);
	n = n % 16;
	if (n < 10)
		n = n + '0';
	else
		n = n + 'a' - 10;
	ft_putchar((char)n);
}
