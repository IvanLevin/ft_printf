#include "ft_printf.h"

void        ft_printf_f(t_lists *list, double n)
{
//    long long   sign;
    size_t  len;
    int     i;
    char    *tmp;
    double  pnt;
    char    *tmp2;
    double  addit;


//    sign = (long long)n;
    printf("%d", list->precision);
    addit = 0.5;
    i = (int)n;
    tmp = ft_strnew(500);
    tmp = ft_itoa_long((long long)n);
    len = ft_strlen(tmp);
    pnt = n - i;
//    printf("%f\n", pnt);
    if (!list->precision)
        list->precision = 6;
//    if (list->dot)
//    {
//        list->precision = 0;
//        addit = 0;
//    }
    while (list->precision)
    {
        pnt *= 10;
        list->precision -= 1;
    }
    pnt += addit;
//    printf("%f", pnt);
    if (list->precision)
    {
        tmp[len] = '.';
        tmp2 = ft_strnew(500);
        tmp2 = ft_strjoin(tmp, ft_itoa_long((long long) pnt));
        len += ft_strlen(ft_itoa_long((long long) pnt)) + 1;
    }
    else
        tmp2 = ft_strjoin(tmp, ft_itoa_long((long long) pnt));
    ft_print_free(tmp2, list, (int)len);
}