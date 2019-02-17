
#include "ft_printf.h"

static	long long	ft_get_type(va_list ap, t_lists *list)
{
	if (!list->mod)
		return ((unsigned)va_arg(ap, int));
	else if ((ft_strchr(&list->mod, 'h')))
		return ((unsigned short)va_arg(ap, int));
	else if ((ft_strchr(&list->mod, 'l')))
		return (va_arg(ap, long int));
	else if ((ft_strchr(&list->mod, 'G')))
		return (va_arg(ap, unsigned int));
	else if ((ft_strchr(&list->mod, 'K')))
		return ((unsigned long long)va_arg(ap, long int));
	return (0);
}

int					data_types(char *argv, va_list ap, t_lists *list)
{
	if (*argv == 's')
		ft_printf_s(va_arg(ap, char *), list);
	else if (*argv == 'c')
		ft_printf_c(list, ap);
	else if (*argv == 'd' || *argv == 'i' || *argv == 'u')
		ft_printf_d_i_u(list, argv, ap);
	else if (*argv == 'x' || *argv == 'X')
	{
		list->spec = *argv;
		list->base = 16;
		ft_printf_x(ft_get_type(ap, list), list);
	}
	else if (*argv == 'o')
	{
		list->spec = *argv;
		list->base = 8;
		ft_printf_x(ft_get_type(ap, list), list);
	}
	else if (*argv == 'p')
		ft_printf_p(list, va_arg(ap, long long));
	else if (*argv == 'f')
		ft_printf_f(list, va_arg(ap, double));
	return (1);
}
