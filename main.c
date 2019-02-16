

#include "ft_printf.h"

int		main(void)
{
    // 1.
    printf("|%-10s is a string|\n", "this");
    ft_printf("|%-10s is a string|\n", "this");
	return (0);
}
