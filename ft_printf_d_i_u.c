
#include "ft_printf.h"

void    print_width_d_i (t_lists *list, char *arr_d, long long len)
{
    char    *arr_1;
    int     i;

    i = 0;
    len = list->width - len;
    arr_1 = ft_strnew(len);
    if (list->minus == 1)
        i = d_minus_left(arr_1, arr_d, len, list);
    else if(list->minus == 0)
        i = d_minus_right(arr_1, arr_d, len, list);
    ft_print_free(arr_1, list, i);
}

void    print_precision_d_i (t_lists *list, char *arr_d, long long len)
{
    char        *arr_1;
    char        *arr_2;
    int   i;

    i = 0;
    arr_1 = ft_strnew((size_t)list->precision + 1);
    len = list->precision - len;
    i = flag_and_width_d(list, arr_1, arr_d, len);
    if (list->precision < list->width && list->width)
    {
        arr_2 = ft_strnew((size_t)list->width);
        i = list->minus == 1 ? pr_right_d(arr_1, arr_2, list) : pr_left_d(arr_1, arr_2, list);
        free(arr_1);
        ft_print_free(arr_2, list, i);
//        free(arr_2);
    }
    else
        ft_print_free(arr_1, list, i);
}

void    print_d_i(t_lists *list, void *arr_d)
{
    long long  len;

    len = (long long)ft_strlen(arr_d);
    if ((size_t)list->precision > len && list->precision)
        print_precision_d_i (list, arr_d, len);

    else if ((size_t)list->width > len && list->width)
        print_width_d_i (list, arr_d, len);
    else
        ft_print_free(arr_d, list, (long long)len);
}

void    ft_printf_d_i_u(t_lists *list, char *specifier, va_list ap)
{
    if ((*specifier == 'd' || *specifier == 'i' ) && !list->mod)
        print_d_i(list, ft_itoa_long(va_arg(ap, int)));
    else if ((*specifier == 'd' || *specifier == 'i') && ft_strchr(&list->mod, 'h'))
        print_d_i(list, ft_itoa_long(va_arg(ap, int)));
    else if ((*specifier == 'd' || *specifier == 'i') && ft_strchr(&list->mod, 'l'))
        print_d_i(list, ft_itoa_long(va_arg(ap, long)));
    else if ((*specifier == 'd' || *specifier == 'i') && ft_strchr(&list->mod, 'G'))
        print_d_i(list, ft_itoa_long(va_arg(ap, unsigned int)));
    else if ((*specifier == 'd' || *specifier == 'i') && ft_strchr(&list->mod, 'K'))
        print_d_i(list, ft_itoa_long(va_arg(ap, long long int)));
    if (*specifier == 'u')
    {
        list->spec = 'u';
        if (*specifier == 'u')
            print_d_i(list, ft_itoa_long(va_arg(ap, unsigned int)));
        else if (*specifier == 'u' && ft_strchr(&list->mod, 'l'))
            print_d_i(list, ft_itoa_long(va_arg(ap, unsigned long long int)));
    }
}