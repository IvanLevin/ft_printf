#include <limits.h>
#include "ft_printf.h"

int		main(void)
{
//	printf("|%#o|\n", 0);
//	ft_printf("|%#o|\n", 0);
//	printf("|%#.0o|\n", 0);
//	ft_printf("|%#.0o|\n", 0);
//
//	printf("|%.o|\n", 0);
//	ft_printf("|%.o|\n", 0);
//	printf("|%.0o|\n", 0);
//	ft_printf("|%.0o|\n", 0);
//
//
	printf("|%.#o|\n", 0);
	ft_printf("|%#.o|\n", 0);
	printf("|%#.0o|\n", 0);
	ft_printf("|%#.0o|\n", 0);
return (0);
}
