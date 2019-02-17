

#include "ft_printf.h"

int		main(void)
{
    // 1.

    printf("|%.4O|\n", 42);
    ft_printf("|%.4O|\n", 42);
    printf("|%4.s|\n", "42");
    ft_printf("|%4.s|\n", "42");

    printf("|%|\n");
    ft_printf("|%|\n");
	return (0);
}
