#include "ft_printf.h"

void        ft_print_fby1(double pnt, t_lists *list, int prec)
{
    char    *tmp;
    double  test = 0.5;
    ft_print_free(".", list, 1);
    tmp = ft_strnew((size_t)list->precision);
    while (prec)
    {
        pnt = pnt * 10;
        if (prec == 1)
            pnt += test;
        tmp = ft_strjoin(tmp, ft_itoa_long((long long)pnt));
        tmp = ft_itoa_long((long long)pnt);
        ft_print_free(tmp, list, (long long)ft_strlen(tmp));
        pnt = pnt - (long)pnt;
        prec--;
    }
}

double      ft_get_addit(int prec)
{

    double  addit;

    addit = 0.5;
    while (prec)
    {
        addit /= 10;
        prec--;
    }
//    printf("\n pnt = %f \n", pnt);
//    printf("\nRESULT = %f\n", pnt);
    return (addit);
}

void        ft_printf_f(t_lists *list, double n)
{
    size_t  len;
    double  i;
    char    *tmp;
    double  pnt;
    char    *tmp2;
    double test;

    pnt = n - (long)n;
//    test = ft_get_addit(list->precision);
    tmp = ft_strnew(500);
    tmp = ft_itoa_long((long long)n);
    len = ft_strlen(tmp);
    ft_print_free(tmp, list, (int)len);
//    pnt = n - (long)n;
    ft_print_fby1(pnt, list, list->precision);
//    if (list->dot)
//    {
//        list->precision = 0;
//    }
//    else if (!list->precision)
//        list->precision = 6;
////printf("%d\n", list->precision);
//    while (list->precision)
//    {
//            pnt *= 10;
//            list->precision -= 1;
//    }
////    pnt += addit;
////    printf("%f", addit);
//
//    printf("%f", pnt);
////    if (list->precision)
////    {
//        tmp[len] = '.';
//        tmp2 = ft_strnew(500);
//        tmp2 = ft_strjoin(tmp, ft_itoa_long((long long)pnt));
//        len += ft_strlen(ft_itoa_long((long long)pnt)) + 1;
////    }
////    tmp2 = ft_strjoin(tmp, ft_itoa_long((long long) pnt));
////    else
////        tmp2 = ft_strjoin(tmp, ft_itoa_long((long long) pnt));
//    ft_print_free(tmp2, list, (int)len);
}