

#include "ft_printf.h"

int main(void)
{
	double d;
	double f;
	int z;
	int t;
	int 	t1;


	d = 10.84761244656;
	printf("ORIGIN|%.16f|\n", d);
	ft_printf("    FT|%.16f|\n", d);


	return (0);
}
