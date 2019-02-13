#include "ft_printf.h"


void        ft_print_fby1(long double pnt, t_lists *list, long double five)
{
    char    *tmp;

    ft_print_free(".", list, 1);
    tmp = ft_strnew((size_t)list->precision);
    if (list->precision <= 16)
    {
        while (list->precision)
        {
            pnt = pnt * 10;
            list->precision--;
        }
        pnt = pnt + 0.5;
        printf("PNT = %Lf\n", pnt);
    }
    else
    {
        while (list->precision)
        {
            if (list->precision == 1)
            {
                pnt = pnt + 0.5;
                tmp = ft_strjoin(tmp, ft_itoa_long((long long)pnt));
                tmp = ft_itoa_long((long long)pnt);
                ft_print_free(tmp, list, (long long)ft_strlen(tmp));
                break;
            }
            pnt = pnt * 10;
            tmp = ft_strjoin(tmp, ft_itoa_long((long long)pnt));
            tmp = ft_itoa_long((long long)pnt);
            ft_print_free(tmp, list, (long long)ft_strlen(tmp));
            pnt = pnt - (long)pnt;
            list->precision--;
        }
    }

//    printf("\nFIVE = %.12f \n", five);
//   pnt = pnt * 10;
    //printf("\n PNT %.12f \n", pnt);
//    tmp = ft_itoa_long((long long)pnt);
//    ft_print_free(tmp, list, (long long)ft_strlen(tmp));
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

void        ft_printf_f(t_lists *list, double n)
{
    size_t  len;
    char    *tmp;
    long double  pnt;
    int     i;
    long double  five;

    pnt = n - (long)n;
    tmp = ft_strnew(500);
    tmp = ft_itoa_long((long long)n);
    len = ft_strlen(tmp);
    ft_print_free(tmp, list, (int)len);
    five = ft_get_addit(list->precision);
    ft_print_fby1(pnt, list, five);
}