

#include "ft_printf.h"

int		main(void)
{
    double  d;

//   int t;
//   int t1;
//
//   char *z = "abc";
//	int d  = 3;
//	ft_printf("*%+5.8d*\n", d);
//	ft_printf("*%-5.8d*\n", d);
//	ft_printf("*%05.4d*\n", d);
//	ft_printf("*% 5.3d*\n", d);
//	ft_printf("*% 3.5d*\n", d);
//	ft_printf("*% -5d*\n", d);
//	printf("\n");
//	d = -3;
//	ft_printf("*%+5.8d*\n", d);
//	ft_printf("*%-5.8d*\n", d);
//	ft_printf("*%05.4d*\n", d);
//	ft_printf("*% 5.3d*\n", d);
//	ft_printf("*% 3.5d*\n", d);
//	ft_printf("*% -5d*\n", d);
//	char a[5] = "Hello";
//	char  d = 'A';
//	printf("*%#6.12X*\n", 214850000);
//  printf("%d", 2200000000);
//    ft_printf("|%d||%x|\n", 23, 255);
//
//    printf("|%x|\n", 4081);
//    ft_printf("|%x|\n", 4081);

//    printf("|%10x|\n", 2147);
//    ft_printf("|%10x|\n", 2147);
//
//
//    printf("|%-10x|\n", -18779868);
//    ft_printf("|%-10x|\n", -18779868);
//
//    printf("|%10.8x|\n", 2147);
//    ft_printf("|%10.8x|\n", 2147);
//
//    printf("|%-10.4x|\n", 8888888);
//    ft_printf("|%-10.4x|\n", 8888888);
//
//    printf("###########\n");
//    printf("|%#10x|\n", 2147);
//    ft_printf("|%#10x|\n", 2147);
//
//
//    printf("|%-#12x|\n", -1);
//    ft_printf("|%-#12x|\n", -1);
//
//    printf("|%#4.8x|\n", 2147);
//    ft_printf("|%#4.8x|\n", 2147);
////
//
//    printf("|%x|\n", 8888888);
//    ft_printf("|%x|\n", 8888888);
//////
//    printf("|%-#x|\n", 8888888);
//    ft_printf("|%-#x|\n", 8888888);
////
//    printf("|%-#10x|\n", 8888888);
//    ft_printf("|%-#10x|\n", 8888888);
////
//    printf("|%-#10.4x|\n", 8888888);
//    ft_printf("|%-#10.4x|\n", 8888888);
////
//    printf("|%-10.4x|\n", 8888888);
//    ft_printf("|%-10.4x|\n", 8888888);
//////
//    printf("|%010.4x|\n", 214750000);
//    ft_printf("|%010.4x|\n", 214750000);
//
//    printf("|%#018x|\n", 214750000);
//    ft_printf("|%#018x|\n", 214750000);
//
//    printf("|%0*x|\n", 8, 15);
//    ft_printf("|%0*x|\n", 8, 15);
//
////    printf("|%0 15.d|\n", 35489877);
////    ft_printf("|%0 15.d|\n", 35489877);
//
//
//    printf("|%#015.x|\n", 3);
//    ft_printf("|%#015.x|\n", 3);
//    printf("|%o|\n", 157865);
//    ft_printf("|%o|\n", 157865);
//
//    printf("|%o|\n", 157865);
//    ft_printf("|%o|\n", 157865);
//
//    printf("|%o|\n", -157865);
//    ft_printf("|%o|\n", -157865);
//
//    printf("|%1o|\n", -157865);
//    ft_printf("|%1o|\n", -157865);
//
//    printf("|%15o|\n", -157865);
//    ft_printf("|%15o|\n", -157865);
//
//    printf("|%#.x|\n", -157865);
//    ft_printf("|%#.x|\n", -157865);
//
//
//    printf("|%0.18o|\n", -157865);
//    ft_printf("|%0.18o|\n", -157865);
//
//    printf("###########\n");
//    printf("|%#18.18o|\n", -157865);
//    ft_printf("|%#18.18o|\n", -157865);
//
//    printf("|%-18.1o|\n", -157865);
//    ft_printf("|%-18.1o|\n", -157865);
//
//    printf("|%-1.1o|\n", -157865);
//    ft_printf("|%-1.1o|\n", -157865);
//
//    printf("|%10.15o|\n", -157865);
//    ft_printf("|%10.15o|\n", -157865);
//
//    printf("|%.o|\n", -157865);
//    ft_printf("|%.o|\n", -157865);
//
//    printf("|%17.o|\n", -157865);
//    ft_printf("|%17.o|\n", -157865);
//
//    printf("###########\n");
//    printf("|%17.5o|\n", -157865);
//    ft_printf("|%17.5o|\n", -157865);
//
//    printf("|%17.13o|\n", -157865);
//    ft_printf("|%17.13o|\n", -157865);
//
//    printf("|%#17.13o|\n", -157865);
//    ft_printf("|%#17.13o|\n", -157865);
////
//    printf("|%#17.16o|\n", -157865);
//    ft_printf("|%#17.16o|\n", -157865);
//
//    printf("|%#-17.16o|\n", -157865);
//    ft_printf("|%#-17.16o|\n", -157865);
//
//    printf("|%30o|\n", -157865);
//    ft_printf("|%30o|\n", -157865);
//
//    printf("|%#17X|\n", -157865);
//    ft_printf("|%#17X|\n", -157865);
//
//    printf("|%#-1.16x|\n", -157865);
//    ft_printf("|%#-1.16x|\n", -157865);
//
//
//
//    printf("|%#19.17x|\n", -89);
//    ft_printf("|%#19.17x|\n", -89);
//
//    printf("|%#19.17X|\n", -157865);
//    ft_printf("|%#19.17X|\n", -157865);
//
//    printf("|%#19.17o|\n", -157865);
//    ft_printf("|%#19.17o|\n", -157865);
//
//    printf("|%#19.17o|\n", -157865);
//    ft_printf("|%#19.17o|\n", -157865);
//
    d = 12.51;
    printf("ORIGIN|%#+-.26f|\n", d);
    ft_printf("   FT |%#+-.26f|\n", d);

    d = 14.51237;
    printf("ORIGIN|%#+-.32f|\n", d);
    ft_printf("   FT |%#+-.32f|\n", d);

    d = -14.51237;
    printf("ORIGIN|%#+43.27f|\n", d);
    ft_printf("   FT |%#+43.27f|\n", d);

    d = -14.51237;
    printf("ORIGIN|%0+43.27f|\n", d);
    ft_printf("   FT |%0+43.27f|\n", d);

    d = -14.512378979878;
    printf("ORIGIN|%+-43.27f|\n", d);
    ft_printf("   FT |%+-43.27f|\n", d);

    d = -14.512378979878;
    printf("ret orig = %d\n", printf("ORIGIN|%+#.27f|", d));
    printf("ret ft   = %d\n", ft_printf("   FT |%+#.27f|", d));

    d = 14.512378979878;
    printf("orig = %d\n", printf("ORIGIN|%+#.f|", d));
    printf("ft   = %d\n", ft_printf("   FT |%+#.f|", d));

    d = 14.512378;
    printf("ret orig = %d\n", printf("ORIGIN|%#+f|", d));
    printf("ret ft   = %d\n", ft_printf("   FT |%#+f|", d));

    d = -14.512378;
    printf("ret orig = %d\n", printf("ORIGIN|%+-f|", d));
    printf("ret ft   = %d\n", ft_printf("   FT |%+-f|", d));

    d = -14.5;
    printf("ret orig = %d\n", printf("ORIGIN|%-f|", d));
    printf("ret ft   = %d\n", ft_printf("   FT |%-f|", d));
//
    d = -13.5;
    printf("ret orig = %d\n", printf("ORIGIN|%-#.f|", d));
    printf("ret ft   = %d\n", ft_printf("   FT |%-#.f|", d));

    d = -14.5;
    printf("ret orig = %d\n", printf("!!ORIGIN|%-.f|", d));
    printf("ret ft   = %d\n", ft_printf("!!   FT |%-.f|", d));

    d = -13.51;
    printf("ret orig = %d\n", printf("ORIGIN|%-.f|", d));
    printf("ret ft   = %d\n", ft_printf("   FT |%-.f|", d));

    d = -14.51;
    printf("ret orig = %d\n", printf("!!ORIGIN|%-.f|", d));
    printf("ret ft   = %d\n", ft_printf("!!   FT |%-.f|", d));

    d = 12.5;
    printf("ret orig = %d\n", printf("!!ORIGIN|%-.f|", d));
    printf("ret ft   = %d\n", ft_printf("!!   FT |%-.f|", d));

    d = 13.5;
    printf("ret orig = %d\n", printf("ORIGIN|%-.f|", d));
    printf("ret ft   = %d\n", ft_printf("   FT |%-.f|", d));
//
    d = 14698987987.556787987;
    printf("ret orig = %d\n", printf("!!!ORIGIN|%+-50.f|", d));
    printf("ret ft   = %d\n", ft_printf("!!!   FT |%+-50.f|", d));

    d = 14698987987.556787987;
    printf("ret orig = %d\n", printf("ORIGIN|%-+.20f|", d));
    printf("ret ft   = %d\n", ft_printf("   FT |%-+.20f|", d));

    d = -14698987987.556787987;
    printf("ret orig = %d\n", printf("ORIGIN|%-50.20f|", d));
    printf("ret ft   = %d\n", ft_printf("   FT |%-50.20f|", d));

    d = -14698987987.556787987;
    printf("ret orig = %d\n", printf("ORIGIN|%050.20f|", d));
    printf("ret ft   = %d\n", ft_printf("   FT |%050.20f|", d));

    d = 14698987987.556787987;
    printf("ret orig = %d\n", printf("ORIGIN|%+050.20f|", d));
    printf("ret ft   = %d\n", ft_printf("   FT |%+050.20f|", d));

    d = -1467987.556787987;
    printf("ret orig = %d\n", printf("ORIGIN|%50.20f|", d));
    printf("ret ft   = %d\n", ft_printf("   FT |%50.20f|", d));

    d = -1467987.556787987;
    printf("ret orig = %d\n", printf("ORIGIN|%50.f|", d));
    printf("ret ft   = %d\n", ft_printf("   FT |%50.f|", d));

    d = -1467987.556787987;
    printf("ret orig = %d\n", printf("ORIGIN|%.f|", d));
    printf("ret ft   = %d\n", ft_printf("   FT |%.f|", d));

    d = -1467987.556787987;
    printf("ret orig = %d\n", printf("ORIGIN|%-48.28f|", d));
    printf("ret ft   = %d\n", ft_printf("   FT |%-48.28f|", d));

    d = 1467987.556787987;
    printf("ret orig = %d\n", printf("ORIGIN|%+-48.28f|", d));
    printf("ret ft   = %d\n", ft_printf("   FT |%+-48.28f|", d));

//    float z;
//    z = -92233720368547758;
//    printf("ret orig = %d\n", printf("ORIGIN|%f|", z));
//    printf("ret ft   = %d\n", ft_printf("   FT |%f|", z));



//    printf("|% 15d|\n", 1);
//    ft_printf("|% 15d|\n", 1);

//    printf("|%1.x|\n", 0);
//    ft_printf("|%1.x|\n", 0);
//
//    printf("|%#17.18x|\n", -10);
//    ft_printf("|%#17.18x|\n", -10);
//
//    printf("|%#2.0001x|\n", 0);
//    ft_printf("|%#2.0001x|\n", 0);

//    printf("|%.d|\n", 0);
//    ft_printf("|%.d|\n", 0);


////
////    printf("ABC\n");
////    ft_printf("ABC\n");
////
////    printf("%d\n", 5);
////    ft_printf("%d\n", 5);
//
//    printf("|%#028.24x|\n", 337598646);
//    ft_printf("|%#028.24x|\n", 337598646);
//    t = printf("o4 = |%-10.s|\n", z);
// 	t1 = ft_printf("m4 = |%-10.s|\n", z);
// 	printf("o4 = %d\n",t);
// 	printf("m4 = %d\n",t1);
	return (0);
}
