#include "ft_printf.h"

void        ft_printf_f(t_lists *list, double n)
{
    size_t  len;
    int     i;
    char    *tmp;
    double  pnt;
    char    *tmp2;


    i = (int)n;
    tmp = ft_strnew(500);
    tmp = ft_itoa_long((long long)n);
    len = ft_strlen(tmp);
    pnt = n - i;
//    printf("%f\n", pnt);
    if (!list->precision)
        list->precision = 6;
    while (list->precision)
    {
        pnt *= 10;
        list->precision -= 1;
    }
//    printf("%f", pnt);
    tmp[len] = '.';
    tmp2 = ft_strnew(500);
//    if (list->precision %2 == 0)
//        pnt += 1;
    tmp2 = ft_strjoin(tmp, ft_itoa_long((long long)pnt));
    len += ft_strlen(ft_itoa_long((long long)pnt)) + 1;
    ft_print_free(tmp2, list, (int)len);
}