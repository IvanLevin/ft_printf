#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{

	printf("%Lf\n", 6);
	ft_printf("%Lf\n", 6);
//	printf("|%D|\n", LONG_MIN);
//	ft_printf("|%D|\n", LONG_MIN);
//	printf("|%D|\n", LONG_MIN);
//	ft_printf("|%D|\n", LONG_MIN);
	return (0);
}