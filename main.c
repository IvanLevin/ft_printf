

#include "ft_printf.h"

int		main(void)
{
	int d  = 3;
	ft_printf("*%+5.8d*\n", d);
	ft_printf("*%-5.8d*\n", d);
	ft_printf("*%05.4d*\n", d);
	ft_printf("*% 5.3d*\n", d);
	ft_printf("*% 3.5d*\n", d);
	ft_printf("*% -5d*\n", d);
	printf("\n");
	d = -3;
	ft_printf("*%+5.8d*\n", d);
	ft_printf("*%-5.8d*\n", d);
	ft_printf("*%05.4d*\n", d);
	ft_printf("*% 5.3d*\n", d);
	ft_printf("*% 3.5d*\n", d);
	ft_printf("*% -5d*\n", d);
	return (0);
}
