
#include "ft_printf.h"

void		ft_get_type(va_list ap, t_lists *list)
{
	if (!list->mod)
		ft_printf_x((unsigned)va_arg(ap, int), list);
	else if ((ft_strchr(&list->mod, 'h')))
		ft_printf_x((unsigned short)va_arg(ap, int), list);
	else if ((ft_strchr(&list->mod, 'l')))
		ft_printf_x((unsigned long long)va_arg(ap, long), list);
	else if ((ft_strchr(&list->mod, 'G')))
		ft_printf_x((unsigned char)va_arg(ap, unsigned int), list);
	else if ((ft_strchr(&list->mod, 'K')))
		ft_printf_x((unsigned long long)va_arg(ap, long long), list);
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
		ft_get_type(ap, list);
	}
	else if (*argv == 'o')
	{
		list->spec = *argv;
		list->base = 8;
		ft_get_type(ap, list);
	}
	else if (*argv == 'p')
		ft_printf_p(list, va_arg(ap, long long));
	else if (*argv == 'f')
		ft_printf_f(list, va_arg(ap, double));
	return (1);
}

