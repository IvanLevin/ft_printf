

#include "ft_printf.h"

int		main(void)
{
    // 1.

//    printf("|%llx|\n", 9223372036854775807);
//    ft_printf("|%llx|\n", 9223372036854775807);
//
//    printf("|%llx|\n", 9223372036854775808);
//    ft_printf("|%llx|\n", 9223372036854775808);

    printf("|%.40x|\n", 44);
    ft_printf("|%.40x|\n", 44);
    printf("|%4.s|\n", "42");
    ft_printf("|%4.s|\n", "42");
//
    printf("|%|\n");
    ft_printf("|%|\n");
	return (0);
}
