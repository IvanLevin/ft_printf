

#include "ft_printf.h"

int		main(void)
{
//    double  d;

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
    ft_printf("|%d||%x|\n", 23, 255);

    printf("|%x|\n", 4081);
    ft_printf("|%x|\n", 4081);

    printf("|%10x|\n", 2147);
    ft_printf("|%10x|\n", 2147);


    printf("|%-10x|\n", -18779868);
    ft_printf("|%-10x|\n", -18779868);

    printf("|%10.8x|\n", 2147);
    ft_printf("|%10.8x|\n", 2147);

    printf("|%-10.4x|\n", 8888888);
    ft_printf("|%-10.4x|\n", 8888888);

    printf("###########\n");
    printf("|%#10x|\n", 2147);
    ft_printf("|%#10x|\n", 2147);
//
//
    printf("|%-#12x|\n", -1);
    ft_printf("|%-#12x|\n", -1);
//
    printf("|%#4.8x|\n", 2147);
    ft_printf("|%#4.8x|\n", 2147);
//

    printf("|%x|\n", 8888888);
    ft_printf("|%x|\n", 8888888);
////
    printf("|%-#x|\n", 8888888);
    ft_printf("|%-#x|\n", 8888888);
//
    printf("|%-#10x|\n", 8888888);
    ft_printf("|%-#10x|\n", 8888888);
//
    printf("|%-#10.4x|\n", 8888888);
    ft_printf("|%-#10.4x|\n", 8888888);
//
    printf("|%-10.4x|\n", 8888888);
    ft_printf("|%-10.4x|\n", 8888888);
////
    printf("|%010.4x|\n", 214750000);
    ft_printf("|%010.4x|\n", 214750000);

    printf("|%#018x|\n", 214750000);
    ft_printf("|%#018x|\n", 214750000);

    printf("|%0*x|\n", 8, 15);
    ft_printf("|%0*x|\n", 8, 15);

//    printf("|%0 15.d|\n", 35489877);
//    ft_printf("|%0 15.d|\n", 35489877);


    printf("|%#015.x|\n", 3);
    ft_printf("|%#015.x|\n", 3);
    printf("|%o|\n", 157865);
    ft_printf("|%o|\n", 157865);

    printf("|%o|\n", 157865);
    ft_printf("|%o|\n", 157865);

    printf("|%o|\n", -157865);
    ft_printf("|%o|\n", -157865);

    printf("|%1o|\n", -157865);
    ft_printf("|%1o|\n", -157865);

    printf("|%15o|\n", -157865);
    ft_printf("|%15o|\n", -157865);

    printf("|%#.x|\n", -157865);
    ft_printf("|%#.x|\n", -157865);


    printf("|%0.18o|\n", -157865);
    ft_printf("|%0.18o|\n", -157865);

    printf("###########\n");
    printf("|%#18.18o|\n", -157865);
    ft_printf("|%#18.18o|\n", -157865);

    printf("|%-18.1o|\n", -157865);
    ft_printf("|%-18.1o|\n", -157865);

    printf("|%-1.1o|\n", -157865);
    ft_printf("|%-1.1o|\n", -157865);

    printf("|%10.15o|\n", -157865);
    ft_printf("|%10.15o|\n", -157865);

    printf("|%.o|\n", -157865);
    ft_printf("|%.o|\n", -157865);

    printf("|%17.o|\n", -157865);
    ft_printf("|%17.o|\n", -157865);

    printf("###########\n");
    printf("|%17.5o|\n", -157865);
    ft_printf("|%17.5o|\n", -157865);

    printf("|%17.13o|\n", -157865);
    ft_printf("|%17.13o|\n", -157865);

    printf("|%#17.13o|\n", -157865);
    ft_printf("|%#17.13o|\n", -157865);
//
    printf("|%#17.16o|\n", -157865);
    ft_printf("|%#17.16o|\n", -157865);

    printf("|%#-17.16o|\n", -157865);
    ft_printf("|%#-17.16o|\n", -157865);

    printf("|%30o|\n", -157865);
    ft_printf("|%30o|\n", -157865);

    printf("|%#17X|\n", -157865);
    ft_printf("|%#17X|\n", -157865);

    printf("|%#-1.16x|\n", -157865);
    ft_printf("|%#-1.16x|\n", -157865);



    printf("|%#19.17x|\n", -89);
    ft_printf("|%#19.17x|\n", -89);

    printf("|%#19.17X|\n", -157865);
    ft_printf("|%#19.17X|\n", -157865);

    printf("|%#19.17o|\n", -157865);
    ft_printf("|%#19.17o|\n", -157865);

    printf("|%#19.17o|\n", -157865);
    ft_printf("|%#19.17o|\n", -157865);
//////
//    d = 12.51;
//    printf("ORIGIN|%#+-.26f|\n", d);
//    ft_printf("   FT |%#+-.26f|\n", d);
//
//    d = 14.51237;
//    printf("ORIGIN|%#+-.32f|\n", d);
//    ft_printf("   FT |%#+-.32f|\n", d);
//
//    d = -14.51237;
//    printf("ORIGIN|%#+43.27f|\n", d);
//    ft_printf("   FT |%#+43.27f|\n", d);
//
//    d = -14.51237;
//    printf("ORIGIN|%0+43.27f|\n", d);
//    ft_printf("   FT |%0+43.27f|\n", d);
//
//    d = -14.512378979878;
//    printf("ORIGIN|%+-43.27f|\n", d);
//    ft_printf("   FT |%+-43.27f|\n", d);
//
//    d = -14.512378979878;
//    printf("ret orig = %d\n", printf("ORIGIN|%+#.27f|", d));
//    printf("ret ft   = %d\n", ft_printf("   FT |%+#.27f|", d));
//
//    d = 14.512378979878;
//    printf("orig = %d\n", printf("ORIGIN|%+#.f|", d));
//    printf("ft   = %d\n", ft_printf("   FT |%+#.f|", d));
//
//    d = 14.512378;
//    printf("ret orig = %d\n", printf("ORIGIN|%#+f|", d));
//    printf("ret ft   = %d\n", ft_printf("   FT |%#+f|", d));
//
//    d = -14.512378;
//    printf("ret orig = %d\n", printf("ORIGIN|%+-f|", d));
//    printf("ret ft   = %d\n", ft_printf("   FT |%+-f|", d));
//
//    d = -14.5;
//    printf("ret orig = %d\n", printf("ORIGIN|%-f|", d));
//    printf("ret ft   = %d\n", ft_printf("   FT |%-f|", d));
////
//    d = -13.5;
//    printf("ret orig = %d\n", printf("ORIGIN|%-#.f|", d));
//    printf("ret ft   = %d\n", ft_printf("   FT |%-#.f|", d));
//
//    d = -14.5;
//    printf("ret orig = %d\n", printf("!!ORIGIN|%-.f|", d));
//    printf("ret ft   = %d\n", ft_printf("!!   FT |%-.f|", d));
//
//    d = -13.51;
//    printf("ret orig = %d\n", printf("ORIGIN|%-.f|", d));
//    printf("ret ft   = %d\n", ft_printf("   FT |%-.f|", d));
//
//    d = -14.51;
//    printf("ret orig = %d\n", printf("!!ORIGIN|%-.f|", d));
//    printf("ret ft   = %d\n", ft_printf("!!   FT |%-.f|", d));
//
//    d = 12.5;
//    printf("ret orig = %d\n", printf("!!ORIGIN|%-.f|", d));
//    printf("ret ft   = %d\n", ft_printf("!!   FT |%-.f|", d));
//
//    d = 13.5;
//    printf("ret orig = %d\n", printf("ORIGIN|%-.f|", d));
//    printf("ret ft   = %d\n", ft_printf("   FT |%-.f|", d));
////
//    d = 14698987987.556787987;
//    printf("ret orig = %d\n", printf("!!!ORIGIN|%+-50.f|", d));
//    printf("ret ft   = %d\n", ft_printf("!!!   FT |%+-50.f|", d));
//
//    d = 14698987987.556787987;
//    printf("ret orig = %d\n", printf("ORIGIN|%-+.20f|", d));
//    printf("ret ft   = %d\n", ft_printf("   FT |%-+.20f|", d));
//
//    d = -14698987987.556787987;
//    printf("ret orig = %d\n", printf("ORIGIN|%-50.20f|", d));
//    printf("ret ft   = %d\n", ft_printf("   FT |%-50.20f|", d));
//
//    d = -14698987987.556787987;
//    printf("ret orig = %d\n", printf("ORIGIN|%050.20f|", d));
//    printf("ret ft   = %d\n", ft_printf("   FT |%050.20f|", d));
//
//    d = 14698987987.556787987;
//    printf("ret orig = %d\n", printf("ORIGIN|%+050.20f|", d));
//    printf("ret ft   = %d\n", ft_printf("   FT |%+050.20f|", d));
//
//    d = -1467987.556787987;
//    printf("ret orig = %d\n", printf("ORIGIN|%50.20f|", d));
//    printf("ret ft   = %d\n", ft_printf("   FT |%50.20f|", d));
//
//    d = -1467987.556787987;
//    printf("ret orig = %d\n", printf("ORIGIN|%50.f|", d));
//    printf("ret ft   = %d\n", ft_printf("   FT |%50.f|", d));
//
//    d = -1467987.556787987;
//    printf("ret orig = %d\n", printf("ORIGIN|%.f|", d));
//    printf("ret ft   = %d\n", ft_printf("   FT |%.f|", d));
//
//    d = -1467987.556787987;
//    printf("ret orig = %d\n", printf("ORIGIN|%-48.28f|", d));
//    printf("ret ft   = %d\n", ft_printf("   FT |%-48.28f|", d));
//
//    d = 1467987.556787987;
//    printf("ret orig = %d\n", printf("ORIGIN|%+-48.28f|", d));
//    printf("ret ft   = %d\n", ft_printf("   FT |%+-48.28f|", d));
//
//    long double a;
//    a = 1467987.5567879879874985790386908L;
//    printf("ret orig = %d\n", printf("ORIGIN|%+-48.28Lf|", a));
//    printf("ret ft   = %d\n", ft_printf("   FT |%+-48.28f|", a));
//
//    printf("|%#-08x|\n", 42);
//    ft_printf("|%#-08x|\n", 42);
//
////    printf("|%lx|\n", -4577398685477579);
////    ft_printf("|%lx|\n", -4577398685477579);
//
////    printf("%lu\n", 42);
////    ft_printf("%lu\n", 42);
//
//    float z;
//    z = -92233720368547758;
//    printf("ret orig = %d\n", printf("ORIGIN|%f|", z));
//    printf("ret ft   = %d\n", ft_printf("   FT |%f|", z));
//
//    printf("|% 15d|\n", 1);
//    ft_printf("|% 15d|\n", 1);
//
//    printf("|%1.x|\n", 0);
//    ft_printf("|%1.x|\n", 0);
//
//    printf("|%#17.18x|\n", -10);
//    ft_printf("|%#17.18x|\n", -10);
//
////    printf("|%#2.0001x|\n", 0);
////    ft_printf("|%#2.0001x|\n", 0);
//
//    printf("|%.d|\n", 0);
//    ft_printf("|%.d|\n", 0);
//
//    printf("|%10s is a string|\n", "this");
//    ft_printf("|%10s is a string|\n", "this");
//
//    printf("|%-10s is a string|\n", "this");
//    ft_printf("|%-10s is a string|\n", "this");
//
//    printf("|%-5c|\n", 42);
//    ft_printf("|%-5c|\n", 42);
//
//    printf("|%-05o|\n", 2500);
//    ft_printf("|%-05o|\n", 2500);
//    printf("|%5.x|\n", 0);
//    ft_printf("|%5.x|\n", 0);
//
//
////    ft_printf("%X", -42);
//	printf("@moulitest: %#.o %#.0o|\n", 0, 0);
//	ft_printf("@moulitest: %#.o %#.0o|\n", 0, 0);
//
//    printf("@moulitest: %#.x %#.0x|\n", 0, 0);
//    ft_printf("@moulitest: %#.x %#.0x|\n", 0, 0);
////
////    printf("ABC\n");
////    ft_printf("ABC\n");
////
////    printf("%d\n", 5);
////    ft_printf("%d\n", 5);
//printf("%");
//ft_printf("%");
//
//    printf("|%#028.24x|\n", 337598646);
//    ft_printf("|%#028.24x|\n", 337598646);
//


//    int t;
//    int t1;
//    t = ft_printf("m1 = %x\n", 5427);
// 	t1 = printf("o1 = %x\n", 5427);
// 	printf("o1 = %d\n",t);
// 	printf("m1 = %d\n",t1);
//
//    t = ft_printf("m2 = %10x\n", 5427);
//    t1 = printf("o2 = %10x\n", 5427);
//    printf("o2 = %d\n",t);
//    printf("m2 = %d\n",t1);
//
//    t = ft_printf("m3 = %.10x\n", 5427);
//    t1 = printf("o3 = %.10x\n", 5427);
//    printf("o3 = %d\n",t);
//    printf("m3 = %d\n",t1);
//
//    t = ft_printf("m4 = %.x\n", 5427);
//    t1 = printf("o4 = %.x\n", 5427);
//    printf("o4 = %d\n",t);
//    printf("m4 = %d\n",t1);
//
//    t = ft_printf("m5 = %.2x\n", 5427);
//    t1 = printf("o5 = %.2x\n", 5427);
//    printf("o5 = %d\n",t);
//    printf("m5 = %d\n",t1);
//
//    t = ft_printf("m6 = %10.2x\n", 5427);
//    t1 = printf("o6 = %10.2x\n", 5427);
//    printf("o6 = %d\n",t);
//    printf("m6 = %d\n",t1);
//
//    t = ft_printf("m7 = %10.7x\n", 5427);// !!
//    t1 = printf("o7 = %10.7x\n", 5427); //!!
//    printf("o7 = %d\n",t);
//    printf("m7 = %d\n",t1);
//
//    t = ft_printf("m8 = %10.10x\n", 5427);//!!
//    t1 = printf("o8 = %10.10x\n", 5427); //!!
//    printf("o8 = %d\n",t);
//    printf("m8 = %d\n",t1);
//
//    t = ft_printf("m9 = %0x\n", 5427);
//    t1 = printf("o9 = %0x\n", 5427);
//    printf("o9 = %d\n",t);
//    printf("m9 = %d\n",t1);
//
//    t = ft_printf("m10 = %0.x\n", 5427);
//    t1 = printf("o10 = %0.x\n", 5427);
//    printf("o10 = %d\n",t);
//    printf("m10 = %d\n",t1);
//
//    t = ft_printf("m11 = %010x\n", 5427);
//    t1 = printf("o11 = %010x\n", 5427);
//    printf("o11 = %d\n",t);
//    printf("m11 = %d\n",t1);
//
//    t = ft_printf("m12 = %05x\n", 5427);//!!
//    t1 = printf("o12 = %05x\n", 5427); //!!
//    printf("o12 = %d\n",t);
//    printf("m12 = %d\n",t1);
//
//    t = ft_printf("m13 = %010.2x\n", 5427);
//    t1 = printf("o13 = %010.2x\n", 5427);
//    printf("o13 = %d\n",t);
//    printf("m13 = %d\n",t1);
//
//    t = ft_printf("m14 = %010.5x\n", 5427); //!!
//    t1 = printf("o14 = %010.5x\n", 5427); //!!
//    printf("o14 = %d\n",t);
//    printf("m14 = %d\n",t1);
//
//    t = ft_printf("m15 = %#x\n", 5427);
//    t1 = printf("o15 = %#x\n", 5427);
//    printf("o15 = %d\n",t);
//    printf("m15 = %d\n",t1);
//
//    t = ft_printf("m16 = %#10x\n", 5427); //!!
//    t1 = printf("o16 = %#10x\n", 5427); //!!
//    printf("o16 = %d\n",t);
//    printf("m16 = %d\n",t1);
//
//    t = ft_printf("m17 = %#3x\n", 5427);
//    t1 = printf("o17 = %#3x\n", 5427);
//    printf("o17 = %d\n",t);
//    printf("m17 = %d\n",t1);
//
//    t = ft_printf("m18 = %#.10x\n", 5427);
//    t1 = printf("o18 = %#.10x\n", 5427);
//    printf("o18 = %d\n",t);
//    printf("m18 = %d\n",t1);
//
//    t = ft_printf("m19 = %#.3x\n", 5427);
//    t1 = printf("o19 = %#.3x\n", 5427);
//    printf("o19 = %d\n",t);
//    printf("m19 = %d\n",t1);
//
//    t = ft_printf("m20 = %#1.3x\n", 5427);
//    t1 = printf("o20 = %#1.3x\n", 5427);
//    printf("o20 = %d\n",t);
//    printf("m20 = %d\n",t1);
//
//    t = ft_printf("m21 = %#1.7x\n", 5427);
//    t1 = printf("o21 = %#1.7x\n", 5427);
//    printf("o21 = %d\n",t);
//    printf("m21 = %d\n",t1);
//
//    t = ft_printf("m22 = %#5.7x\n", 5427);
//    t1 = printf("o22 = %#5.7x\n", 5427);
//    printf("o22 = %d\n",t);
//    printf("m22 = %d\n",t1);
//
//    t = ft_printf("m23 = %0#.5x\n", 5427);
//    t1 = printf("o23 = %0#.5x\n", 5427);
//    printf("o23 = %d\n",t);
//    printf("m23 = %d\n",t1);
//
//    t = ft_printf("m24 = %0#1x\n", 5427);
//    t1 = printf("o24 = %0#1x\n", 5427);
//    printf("o24 = %d\n",t);
//    printf("m24 = %d\n",t1);
//
//    t = ft_printf("m25 = %0#7x\n", 5427); //!!
//    t1 = printf("o25 = %0#7x\n", 5427);//!!
//    printf("o25 = %d\n",t);
//    printf("m25 = %d\n",t1);
//
//    t = ft_printf("m26 = %0#.x\n", 5427); //!!
//    t1 = printf("o26 = %0#.x\n", 5427);//!!
//    printf("o26 = %d\n",t);
//    printf("m26 = %d\n",t1);
//
//    t = ft_printf("m27 = %0#.1x\n", 5427);
//    t1 = printf("o27 = %0#.1x\n", 5427);
//    printf("o27 = %d\n",t);
//    printf("m27 = %d\n",t1);
//
//    t = ft_printf("m28 = %0#.7x\n", 5427);
//    t1 = printf("o28 = %0#.7x\n", 5427);
//    printf("o28 = %d\n",t);
//    printf("m28 = %d\n",t1);
//
//    t = ft_printf("m29 = %0#1.x\n", 5427);
//    t1 = printf("o29 = %0#1.x\n", 5427);
//    printf("o29 = %d\n",t);
//    printf("m29 = %d\n",t1);
//
//    t = ft_printf("m30 = %0#10.x\n", 5427); //!!
//    t1 = printf("o30 = %0#10.x\n", 5427); //!!
//    printf("o30 = %d\n",t);
//    printf("m30 = %d\n",t1);
//
//    t = ft_printf("m31 = %0#1.1x\n", 5427);
//    t1 = printf("o31 = %0#1.1x\n", 5427);
//    printf("o31 = %d\n",t);
//    printf("m31 = %d\n",t1);
//
//    t = ft_printf("m32 = %0#7x\n", 5427); //!!
//    t1 = printf("o32 = %0#7x\n", 5427); //!!
//    printf("o32 = %d\n",t);
//    printf("m32 = %d\n",t1);
//
//    t = ft_printf("m33 = %0#7.5x\n", 5427); //!!
//    t1 = printf("o33 = %0#7.5x\n", 5427); //!!
//    printf("o33 = %d\n",t);
//    printf("m33 = %d\n",t1);
//
//    t = ft_printf("m34 = %0#7.10x\n", 5427);
//    t1 = printf("o34 = %0#7.10x\n", 5427);
//    printf("o34 = %d\n",t);
//    printf("m34 = %d\n",t1);
	return (0);
}
