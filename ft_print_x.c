#include "ft_printf.h"

int         ft_itoa_len(long long n, int base)
{
    int     i;

    i = 0;
    while (n >= (long long)base)
    {
        n /= base;
        i++;
    }
    return (i);
}

char        *ft_itoa_base(long long n, int base)
{
    char    *str;
    int     count;
    int     len;
    char    s[17] = "0123456789abcdef";

    count = 0;
    len = ft_itoa_len(n, base);
    str = (char *)malloc(sizeof(char) * len + 1);
    while (count <= len)
    {
        str[len - count] = s[n % base];
        n /= base;
        count++;
    }
    str[count] = '\0';
    return (str);
}

int       fill_sharp(char *tmp, int tmp_i, t_lists *list)
{
    if (list->sharp)
    {
        tmp[tmp_i] = '0';
        tmp[tmp_i + 1] = 'x';
        return (2);
    }
    return (0);
}
int			fill_zeros(int zeros, char *tmp, int tmp_i, t_lists *list)
{
    int i;

    i = 0;
    while (zeros > 0)
    {
            tmp[tmp_i++] = '0';
        zeros--;
        i++;
    }
    return (i);
}


int         zeros_amount_x(t_lists *list, int len)
{
    if (len > 0 && list->precision)
        return (list->precision - len);
    if (len > 0 && list->width > list->precision)
        return (0);
    if (len > 0 && list->precision < list->width)
        return (list->precision - len);
}

int			space_amount_x(t_lists *list, int len)
{
    if (len > 0 && list->width > len && list->width < list->precision && list->sharp)
        return (list->width - len - list->sharp);
    else if (!len && list->width)
        return (list->width);
    else if (len > 0 && list->width && !list->precision)
        return (list->width - list->sharp - len);
    else if (len > 0 && list->width > list->precision)
        return (list->width - list->precision);
    return (0);
}

void        ft_printf_x(long long n, t_lists *list)
{
    char    *str;
    char    *tmp;
    size_t  len;
    int     tmp_i;
    int     space;
    int     zeros;

    tmp_i = 0;
    str = ft_itoa_base(n, 16);
    len = ft_strlen(str);
    tmp = ft_strnew(len > list->precision ? len + list->width + list->sharp\
            : list->precision + list->sharp);
    space = space_amount_x(list, (int)len);
    zeros = zeros_amount_x(list, (int)len);
    if (!list->minus && space > 0 && !zeros)
    {

        tmp_i += fill_space(space, tmp, tmp_i, list);
        tmp_i += fill_sharp(tmp, tmp_i, list);
    }
    else if (!list->minus && space > 0 && zeros)
    {
        tmp_i += fill_space(space - list->sharp, tmp, tmp_i, list);
        tmp_i += fill_sharp(tmp, tmp_i, list);
        tmp_i += fill_zeros(zeros, tmp, tmp_i, list);
    }
    while (*str)
        tmp[tmp_i++] = *str++;
    if (list->minus && space > 0)
    {
        tmp_i += fill_space(space, tmp, tmp_i, list);
        if (list->sharp)
        {
            list->len += 2;
            write (1, "0x", 2);
        }
    }
    ft_print_free(tmp, list, tmp_i);

}