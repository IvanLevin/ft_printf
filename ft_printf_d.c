
#include "ft_printf.h"

int     extra_rigth_d(char *arr_1, char *arr_d, size_t len, t_lists *list)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    len = (size_t)list->width - ft_strlen(arr_d);
    if ((*arr_d == '-' && list->plus == 1) || *arr_d == '-')
        arr_1[i++] = arr_d[j++];
    else if ((list->space == 1 && list->plus == 0) && (arr_d[j] != '-' || arr_d[j] != '+'))
    {
        arr_1[i++] = ' ';
        j++;
        len--;
    }
    else if (*arr_d != '-' && list->plus == 1)
    {
        arr_1[i++] = '+';
        len--;
    }
    while (len--)
        arr_1[i++] = '0';
    while (arr_d[j])
        arr_1[i++] = arr_d[j++];
    return (i);
}

int     d_minus_right(char *arr_1, char *arr_d, size_t len, t_lists *list)
{
    int     i;
    int     j;

    i = 0;
    if (list->zero == 1)
        i = extra_rigth_d(arr_1, arr_d, len, list);


    return (i);
}

int     d_minus_left(char *arr_1, char *arr_d, size_t len, t_lists *list)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    if ((list->plus == 1 && list->space == 1) \
    || (list->plus == 1 && list->space == 0))
    {
        arr_1[i++] = '+';
        arr_d++;
    }
    else if (list->space == 1 && list->plus == 0)
    {
        arr_1[i++] = ' ';
        arr_d++;
    }
    while (arr_d[j])
        arr_1[i++] = arr_d[j++];
    while (len--)
        arr_1[i++] = ' ';
    return (i);
}

int     pr_left_d(char *arr, char *arr2, t_lists *list)
{
    int     i;
    int     j;
    int     max;
    int     p;

    i = 0;
    j = 0;
    p = 0;
    max = list->width - list->precision - 1;
    while (max > 0)
    {
        arr2[j++] = ' ';
        max--;
        p++;
    }
    while (arr[i])
    {
        arr2[j++] = arr[i++];
        p++;
    }
    return (p);
}

int     pr_right_d(char *arr, char *arr2, t_lists *list)
{
    int     i;
    int     j;
    int     p;

    j = 0;
    i = 0;
    p = 0;
    while (arr[i])
    {
        arr2[j++] = arr[i++];
        p++;
    }
    while (list->width > j)
    {
        arr2[j++] = ' ';
        p++;
    }
    return (p);
}

int     fill_zero(char *arr, t_lists *list, char *ap, size_t max)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    if ((list ->plus == 1 && *ap != '-') || (list->space == 1 && *ap != '-'))
        i = 1;
    if (*ap == '-')
    {
        arr[i++] = '-';
        j = 1;
    }
    while (max-- > 0)
        arr[i++] = '0';
    while (ap[j])
        arr[i++] = ap[j++];
    return (i);
}

int     flag_and_width_d(t_lists *list, char *ar1, char *ar2, size_t len)
{
    int     i;

    i = 0;
    if (list->plus == 1 && *ar2 != '-')
    {
        ar1[i] = '+';
        i = fill_zero(ar1, list, ar2, len);
    }
    else if (list->space == 1 && *ar2 != '-')
    {
        ar1[i] = ' ';
        i = fill_zero(ar1, list, ar2, len);
    }
    else
        i = fill_zero(ar1, list, ar2, len);
    return (i);
}

void    print_d_i(t_lists *list, va_list ap)
{
    char    *arr_d;
    char    *arr_1;
    char    *arr_2;
    int     i;
    size_t  len;

    arr_d = ft_itoa(va_arg(ap, int));
    len = ft_strlen(arr_d);
    if ((size_t)list->precision > len && list->precision)
    {
        arr_1 = ft_strnew((size_t)list->precision + 1);
        len = list->precision - len + 1;
        i = flag_and_width_d(list, arr_1, arr_d, len);
        if (list->precision < list->width && list->width)
        {
            arr_2 = ft_strnew((size_t)list->width);
            i = list->minus == 1 ? pr_right_d(arr_1, arr_2, list) : pr_left_d(arr_1, arr_2, list);
            free(arr_1);
            ft_print_free(arr_2, list, i);
            free(arr_2);
        }
        else
            ft_print_free(arr_1, list, i);
    }
    else if ((size_t)list->width > len && list->width)
    {
        len = list->width - len;
        arr_1 = ft_strnew(len);
        if (list->minus == 1)
            i = d_minus_left(arr_1, arr_d, len, list);
        else if(list->minus == 0)
            i = d_minus_right(arr_1, arr_d, len, list);
        ft_print_free(arr_1, list, i);
    }
}

void    print_d_or_i(t_lists *list, char *specifier, va_list ap)
{
    if ((*specifier == 'd' || *specifier == 'i') && !list->mod)
        print_d_i(list, ap);

}

void    ft_printf_d(t_lists *list, char *specifier, va_list ap)
{
    if (*specifier == 'd' || *specifier == 'i')
        print_d_or_i(list, specifier, ap);
//    else
//        print_u(list, specifier);
}