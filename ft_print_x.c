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
    int     sign;
    int     count;
    int     len;
    char    s[17] = "0123456789abcdef";

    count = 0;
    len = ft_itoa_len(n, base);
    str = (char *)malloc(sizeof(char) * len + 1);
    while (count <= len)
    {
        str[count] = s[n % base];
        count++;
    }
    str[count] = '\0';
    return (str);
}

void        ft_printf_x(long long n, t_lists *list)
{
    char    *str;
    size_t  len;

    str = ft_itoa_base(n, 16);
    len = ft_strlen(str);
    ft_print_free(str, list, (int)len);
}