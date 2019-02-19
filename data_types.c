
#include "ft_printf.h"

void	print_test(char *arr_d, t_lists *list, size_t len)
{
	if (!list->precision && list->dot && *arr_d == '0' && list->spec != 'u')
		ft_print_free2("", list, 0);
	else if (list->dot == 1 && list->spec != 'u' && *arr_d == '0')
		ft_print_free2("", list, 0);
	else if (list->dotzero == 1 && *arr_d == '0' && list->spec != 'u')
		ft_print_free2("", list, 0);
	else if (list->spec == 'u')
	{
		if (*arr_d && list->dotzero == 1)
			ft_print_free2("", list, 0);
		else if (*arr_d == '0' && list->dot)
			ft_print_free2("", list, 0);
		else if (*arr_d)
			ft_print_free(&arr_d, list, (int)len);
		else
			ft_print_free2("", list, 0);
	}
	else
		ft_print_free(&arr_d, list, (int)len);
}

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

void        ft_get_type_f(va_list ap, t_lists *list)
{
    if (!list->mod)
        ft_printf_f(list, va_arg(ap, double));
    else if ((ft_strchr(&list->mod, 'l')))
        ft_printf_f(list, (float)va_arg(ap, double));
    else if ((ft_strchr(&list->mod, 'L')))
        ft_printf_f(list, va_arg(ap, long double));
}

int		data_types(char *argv, va_list ap, t_lists *list)
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
	    ft_get_type_f(ap, list);
	return (1);
}

