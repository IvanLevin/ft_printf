

#include "ft_printf.h"

int		main(void)
{
    double  d;



    ft_printf("|%10%|");
    printf("\n");
    ft_printf("|%%|");
    printf("\n");
    ft_printf("|%-10%|");
    printf("\n");
    ft_printf("|%010%|");
    printf("\n");
    ft_printf("|% 10%|");
    printf("\n");
    d = 3.233421231231231123121371;
    printf("ORIGIN|%.16f|\n", d);
    ft_printf("    FT|%.16f|\n", d);
	return (0);
}
