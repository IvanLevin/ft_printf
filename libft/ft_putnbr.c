
#include "includes/libft.h"

void	ft_putnbr(int n)
{
	unsigned int nbc;

	if (n < 0)
	{
		nbc = -n;
		ft_putchar('-');
	}
	else
		nbc = n;
	if (nbc > 9)
		ft_putnbr(nbc / 10);
	ft_putchar(nbc % 10 + '0');
}
