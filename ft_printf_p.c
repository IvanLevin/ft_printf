#include "ft_printf.h"

static  int     fill_space_p(t_lists *list, size_t len)
{
    if (list->width > len + 2 && list->width)
        return (list->width - ((int)len + 2));
    else if (list->width < len + 2 && list->width)
        return (((int)len + 2));
    return (0);
}

static  int    fill_x_o(char *arr, int i)
{
    arr[i++] = '0';
    arr[i++] = 'x';
    return (i);
}

static  int     printf_p_right(char *p, t_lists *list, size_t len, char *arr)
{
    int     i;
    int     j;
    int     space;

    i = 0;
    j = 0;
    space = fill_space_p(list, len);
    i = fill_x_o(arr, i);
    while (p[j])
        arr[i++] = p[j++];
    while (space-- && list->width > len + 2)
        arr[i++] = ' ';
    return (i);
}

static  int     print_p_left(char *p, t_lists *list, size_t len, char *arr)
{
    int     i;
    int     j;
    int     space;

    i = 0;
    j = 0;
    space = fill_space_p(list, len);
    while (space-- && list->width > len + 2)
        arr[i++] = ' ';
    i = fill_x_o(arr, i);
    while (p[j])
        arr[i++] = p[j++];
    return (i);
}

void    ft_printf_p(t_lists *list, long long ap)
{
    char    *p;
    int     i;
    size_t  len;
    char    *arr;

    i = 0;
    p = ft_itoa_base(ap, 16);
    len = ft_strlen(p);
    arr = ft_strnew(len > list->width ? len + 2 : (len + 2) + list->width);
    if (list->width > len + 2 && list->width && !list->precision && !list->minus)
        i = print_p_left(p, list, len, arr);
    else if (list->width > len + 2 && list->width && !list->precision && list->minus)
        i = printf_p_right(p, list, len, arr);
    else if (list->width < len)
        i = print_p_left(p, list, len, arr);
    ft_print_free(arr, list, i);
}