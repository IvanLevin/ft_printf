#include <limits.h>
#include "ft_printf.h"

int		main(void)
{
    // 1.
//    printf("%ld%ld\n", 0, 42);
//    ft_printf("%ld%ld\n", 0, 42);
//	printf("%d\n",printf("|%hd|\n", -32769));
//	printf("%d\n",ft_printf("|%hd|\n", -32769));
//    printf("|%llx|\n", 9223372036854775807);
//    ft_printf("|%llx|\n", 9223372036854775807);
//
//    printf("%ld\n", LONG_MIN);
//    ft_printf("%ld\n", LONG_MIN);
//
//    printf("%li%li\n", 0, 42);
//    ft_printf("%li%li\n", 0, 42);

//    printf("%lo, %lo\n", 0, ULONG_MAX);
//    ft_printf("%lo, %lo\n", 0, ULONG_MAX);
//
//    printf("%lx, %lx\n", 0, ULONG_MAX);
//    ft_printf("%lx, %lx\n", 0, ULONG_MAX);
//    printf("%ld\n", LONG_MIN);
//    ft_printf("%ld\n", LONG_MIN);
//    printf("|%llx|\n", 9223372036854775808);
//    ft_printf("|%llx|\n", 9223372036854775808);
//    ft_printf("\n");
//    ft_printf("%%\n");
//    ft_printf("%d\n", 42);
//    ft_printf("%d%d\n", 42, 41);
//    ft_printf("%d%d%d\n", 42, 43, 44);
//    ft_printf("%ld\n", 2147483647);
//    ft_printf("%lld\n", 9223372036854775807);
//    ft_printf("%x\n", 505);
//    ft_printf("%X\n", 505);
//    ft_printf("%p\n", &ft_printf);
//    ft_printf("%20.15d\n", 54321);
//    ft_printf("%-10d\n", 3);
//    ft_printf("% d\n", 3);
//    ft_printf("%+d\n", 3);
//    ft_printf("%010d\n", 1);
//    ft_printf("%hhd\n", 0);
//    ft_printf("%jd\n", 9223372036854775807);
//    ft_printf("%zd\n", 4294967295);
//    ft_printf("%\n");
//    ft_printf("%U\n", 4294967295);
//    ft_printf("%u\n", 4294967295);
//    ft_printf("%o\n", 40);
//    ft_printf("%%#08x\n", 42);
//    ft_printf("%x\n", 1000);
//    ft_printf("%#X\n", 1000);
//    ft_printf("%s\n", NULL);
//    ft_printf("%S\n", L"ݗݜशব");
//    ft_printf("%s%s\n", "test", "test");
//    ft_printf("%s%s%s\n", "test", "test", "test");
//    ft_printf("%C\n", 15000);
//    printf("|%.4x|\n", 44);
//    ft_printf("|%.40x|\n", 44);
//    printf("|%4.20c|\n", '4');
//    ft_printf("|%4.20c|\n", '4');
//    printf("|%ld%ld|\n", 0, 42);
//    ft_printf("|%ld%ld|\n", 0, 42);
//    printf("|%li%li|\n", 0, 42);
//    ft_printf("|%li%li|\n", 0, 42);
//    printf("%lld%lld", 0, 42);
//    printf("%lli%lli", 0, 42);
//    printf("%llu, %llu", 0, ULLONG_MAX);
//    printf("%hd%hd", (short int)0, (short int)42);
//    printf("%hi%hi", 0, 42);
//    printf("%hhi%hhi", 0, 42);
//    printf("%hhu, %hhu", 0, UCHAR_MAX + 42);
//    printf("%hhu, %hhu", 0, UCHAR_MAX + 42);
//    printf("%hho, %hho\n", 0, UCHAR_MAX + 42);
//    printf("%hhx, %hhx\n", 0, UCHAR_MAX + 42);
//    printf("%hhX, %hhX\n", 0, UCHAR_MAX + 42);
//
//    ft_printf("%hho, %hho\n", 0, UCHAR_MAX + 42);
//    ft_printf("%hhx, %hhx\n", 0, UCHAR_MAX + 42);
//    ft_printf("%hhX, %hhX\n", 0, UCHAR_MAX + 42);
//    printf("111%s333\n", "222");
//    ft_printf("111%s333\n", "222");
//    printf("{%-13p}", &strlen);
//    printf("{%-12p}", &strlen);
//    printf("{%05p}", 0);
//    printf("{%03c}", 0);
//    printf("%#o", 0);
//    printf("%#X", 0);
//    ft_printf("%#X", 0);
//    printf("{%+03d}", 0);
//    printf("{% 03d}", 0);
//    printf("{%0-3d}", 0);
//    printf("%.u, %.0u", 0, 0);
//    printf("%.0p, %.p", 0, 0);
//    printf("%.5p", 0);
//    printf("%9.2p", 1234);
//    printf("%9.2p", 1234567);
//    printf("%2.9p", 1234);
//    ft_printf("%2.9p", 1234);
//    printf("%2.9p", 1234567);
//    printf("%.p, %.0p", 0, 0);
//    printf("{%05.c}", 0);
//    printf("{%05.s}\n", 0);
//    ft_printf("{%05.s}\n", 0);
//    printf("%hhu / %hhu", SHRT_MAX - 42,  SHRT_MAX - 4200);
//    printf("%o, %ho, %hho\n", -42, -42, -42);
//    ft_printf("%o, %ho, %hho\n", -42, -42, -42);

//printf("%40.30llx\n", ULONG_LONG_MAX);
//
//    ft_printf("%40.30llx\n", ULONG_LONG_MAX);
//    printf("%o\n", 42);
//    ft_printf("%o\n", 42);
//printf("%40s\n", "Ill finish this shit today");
//ft_printf("%40s\n", "Ill finish this shit today");
//
//printf("%#llo\n", ULONG_LONG_MAX);
//ft_printf("%#llo\n", ULONG_LONG_MAX);

//printf("%#o\n", 5);
//ft_printf("%#o\n", 5);
////
//    printf("|%|\n");
//    ft_printf("|%|\n");
//long double d;
//d = 12.23444L;
//printf("|%30.18Lf|\n", d);
//ft_printf("|%30.18Lf|\n", d);
printf("|%:adasd|");
//ft_printf("%");
return (0);
}
