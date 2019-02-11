
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
        ft_printf_s(va_arg(ap, char *), list);
    if (*argv == 'c')
        ft_printf_c(list, ap);
    if (*argv == 'd' || *argv == 'i' || *argv == 'u')
        ft_printf_d_i_u(list, argv, ap);
    if (*argv == 'x' || *argv == 'X')
        ft_printf_x(ft_get_type(ap, list), list);
    if (*argv == 'p')
        ft_printf_p(list, va_arg(ap, long long));
    return (1);
}