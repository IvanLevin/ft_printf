
#include "ft_printf.h"

long long   ft_get_type(va_list ap, t_lists *list)
{
    if (!list->mod)
        return ((unsigned)va_arg(ap, int));
    else if ((ft_strchr(&list->mod, 'h')))
        return ((unsigned short)va_arg(ap, int));
    else if ((ft_strchr(&list->mod, 'l')))
        return (va_arg(ap, long));
    else if ((ft_strchr(&list->mod, 'G')))
        return (va_arg(ap, unsigned int));
    else if ((ft_strchr(&list->mod, 'K')))
        return (va_arg(ap, long long int));
    return (0);
}

int     data_types(char *argv, va_list ap, t_lists *list)
{
    if (*argv == 's')
    {
        ft_printf_s(va_arg(ap, char *), list);
        return (1);
    }
    if (*argv == 'c')
    {
        ft_printf_c(list, ap);
        return (1);
    }
    if (*argv == 'd' || *argv == 'i' || *argv == 'u')
    {
        ft_printf_d_i_u(list, argv, ap);
        return (1);
    }
    if (*argv == 'x' || *argv == 'X')
    {
        list->spec = *argv;
        list->base = 16;
        ft_printf_x(ft_get_type(ap, list), list);
        return (1);
    }
    if (*argv == 'o')
    {
        list->base = 8;
        ft_printf_x(ft_get_type(ap, list), list);
        return (1);
    }
    if (*argv == 'p')
        ft_printf_p(list, va_arg(ap, long long));
    if (*argv == 'f')
        ft_printf_f(list, va_arg(ap, double));
    return (1);
}