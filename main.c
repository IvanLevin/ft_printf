

#include "ft_printf.h"

int		main(void)
{
	int d  = +3;

//	ft_printf("%06d\n", d);
//	ft_printf("%+06d\n", d);
//	ft_printf("% 06d\n", d);
//	d = +3;
//	printf("\n");
//	ft_printf("%06d", d);
//	ft_printf("%+06d", d);
//	ft_printf("% 06d", d);
//	d = +3;
//	printf("\n");
	ft_printf("%06d", d);
	ft_printf("%+06d", d);
    d = -3;
	ft_printf("%05d\n", d);
	return (0);
}
