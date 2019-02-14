#include <math.h>
#include "ft_printf.h"


void        ft_print_fby1(long double pnt, t_lists *list)
{
    char    *tmp;
    if (!list->dot || (list->dot && list->sharp))
    {
        ft_print_free(".", list, 1);
        if (!(list->sharp && list->dot)) {
            tmp = ft_strnew((size_t) list->precision);
//                    if (list->precision <= 16)
//                    {
//                    while (list->precision)
//                    {
//                        pnt = pnt * 10;
//                        list->precision--;
//                    }
//                    pnt = pnt + 0.5;
//                    //        printf("PNT = %Lf\n", pnt);
//                    }
//                    else
//                        {
            while (list->precision)
            {
//                if (list->precision == 1)
//                {
//                    pnt = pnt + 0.5;
//                    tmp = ft_strjoin(tmp, ft_itoa_long((long long) pnt));
//                    tmp = ft_itoa_long((long long) pnt);
//                    ft_print_free(tmp, list, (long long) ft_strlen(tmp));
//                    break;
//                }
                pnt = pnt * 10;
                tmp = ft_strjoin(tmp, ft_itoa_long((long long) pnt));
                tmp = ft_itoa_long((long long) pnt);
                ft_print_free(tmp, list, (long long) ft_strlen(tmp));
                pnt = pnt - (long) pnt;
                list->precision--;
            }
//                    }


            //    printf("\nFIVE = %.12f \n", five);
            //   pnt = pnt * 10;
            //    printf("\n PNT %.12f \n", pnt);
            //        tmp = ft_itoa_long((long long) pnt);
            //        ft_print_free(tmp, list, (long long) ft_strlen(tmp));
        }
    }
//    pnt = pnt - (long)pnt;
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
    return (addit);
}
int         space_amount_f(t_lists *list, int len, long minus)
{
    if (list->width > list->precision + 1 + len - minus)
        return (list->width - list->precision - 1 - len + (int)minus);
    return (0);
}

void        ft_printf_f(t_lists *list, double n)
{
    size_t      len; // длина целой части
    char        *tmp;
    long double pnt; // число после точки
    int         i;
//    long double five;
    long        minus;
    int         tmp_i; // длина всей строки
    int         space;

    tmp_i = 0;
    len = 0;
    minus = *(long*)&n >> 63;
    if (list->precision <= 0 && !(list->dot))
        list->precision = 6;
//    if (list->dot && (long))

//    printf("%ld", minus);
    if (n != n)
    {
        ft_print_free("nan", list, 3);
        exit(1);
    }
    if (minus)
    {
        n *= -1;
        ft_print_free("-", list, 1);
    }
    len += ft_len((long)n);
//        pnt = n - (long long)n;
    n += ft_get_addit(list->precision);
    pnt = n - (long long)n;
    tmp = ft_strnew((size_t)(list->precision + 1 +len < list->width ? \
        list->width : 1 + list->precision + len));
    space = space_amount_f(list, (int)len, minus);
    tmp = ft_itoa_long((long long)n);
    len = ft_strlen(tmp);
    ft_print_free(tmp, list, (int)len);
//    five = ft_get_addit(list->precision);
    ft_print_fby1(pnt, list);
}