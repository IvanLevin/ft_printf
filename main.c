

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
//	char a[5] = "Hello";
//	char  d = 'A';
//	printf("*%#6.12X*\n", 214850000);
//printf("%d", 2200000000);
    ft_printf("*%d*", 23);
//	ft_printf("%#0--+*.* TEST_WORD \n", 32, 12);
//
//	printf("\n-----------------------\n");
//	printf("ZDOROVYI printf    \n");
//	printf("%10hhs\n", a);
//	printf("\n-----------------------\n");
//	printf("\n-----------------------\n");
//	printf("printf KURIL'SCHIKA  \n");
//		ft_printf("%10hhs\n", a);
//	printf("\n-----------------------\n");
//	printf("\n***********************\n");
//	//printf("\n%d", ft_printf("%10s", a));
//	printf("\n-----------------------\n");
//	printf("ZDOROVYI printf    \n");
//	printf("%15s", a);
//	printf("\n-----------------------\n");
//	printf("\n-----------------------\n");
//	printf("printf KURIL'SCHIKA  \n");
//		ft_printf("*%-17c*", d);
	//	printf("\n-----------------------\n");
//		ft_printf("%04d", d);
//	printf("\n-----------------------\n");
//	//
//	printf("\n***********************\n");
//	printf("\n-----------------------\n");
//	printf("ZDOROVYI printf    \n");
//	printf("%-10s", a);
//	printf("\n-----------------------\n");
//	printf("\n-----------------------\n");
//	printf("printf KURIL'SCHIKA  \n");
//	ft_printf("%-1s", a);
//	printf("\n-----------------------\n");

	return (0);
}
