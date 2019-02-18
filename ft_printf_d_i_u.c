
#include "ft_printf.h"

static	void	print_pl_sp_d_i(t_lists *list, char *arr_d, long long len)
{
	char	*arr_1;
	int		i;
	int		j;

	i = 0;
	j = 0;
	arr_1 = ft_strnew((size_t)len + 1);
	if (*arr_d == '0' && list->plus == '0')
		*arr_d = ' ';
	if (list->plus == 1 && *arr_d != '-' && list->spec != 'u')
	{
		arr_1[i++] = '+';
		while (arr_d[j])
			arr_1[i++] = arr_d[j++];
	}
	else if (list->space == 1 && *arr_d != '-' && list->spec != 'u')
	{
		arr_1[i++] = ' ';
		while (arr_d[j])
			arr_1[i++] = arr_d[j++];
	}
	else
		while (arr_d[j])
			arr_1[i++] = arr_d[j++];
	ft_print_free(&arr_1, list, i);
	free(arr_1);
}

static	void	print_width_d_i(t_lists *list, char *arr_d, long long len)
{
	char	*arr_1;
	int		i;

	i = 0;
	if (*arr_d == '0' && !list->zero)
		*arr_d = ' ';
	len = list->width - len;
	arr_1 = ft_strnew((size_t)len);
	if (list->minus == 1)
		i = d_min_left(arr_1, arr_d, len, list);
	else
		if (list->minus == 0)
			i = d_min_right(arr_1, arr_d, len, list);
	ft_print_free(&arr_1, list, i);
	free(arr_1);
}

static	void	print_precision_d_i(t_lists *list, char *arr_d, long long len)
{
	char	*arr_1;
	char	*arr_2;
	int		i;

	arr_1 = ft_strnew((size_t) list->precision + 1);
	len = list->precision - len;
	i = flag_width_d(list, arr_1, arr_d, len);
	if (list->precision < list->width && list->width)
	{
		arr_2 = ft_strnew((size_t) list->width);
		i = list->minus == 1 ? pr_right_d(arr_1, arr_2, list)\
		: pr_left_d(arr_1, arr_2, list);
		free(arr_1);
		ft_print_free(&arr_2, list, i);
		free(arr_2);
	}
	else
	{
		ft_print_free(&arr_1, list, i);
		free(arr_1);
	}
}

static	void	print_test(char *arr_d, t_lists *list, size_t len)
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

static	void	print_d_i(t_lists *list, char *arr_d)
{
	long long	len;

	len = (long long) ft_strlen(arr_d);
	if ((long long) list->precision > len && list->precision)
		print_precision_d_i(list, arr_d, len);
	else
	{
		if ((long long) list->width > len && list->width)
			print_width_d_i(list, arr_d, len);
		else if ((list->plus == 1 || list->space == 1))
			print_pl_sp_d_i(list, arr_d, len);
		else
			print_test(arr_d, list, (size_t)len);
	}
}

void			ft_printf_d_i_u(t_lists *list, char *specifier, va_list ap)
{
	if (*specifier == 'i' || *specifier == 'd')
	{
		if ((*specifier == 'd' || *specifier == 'i') && !list->mod)
			print_d_i(list, ft_itoa_long(va_arg(ap, int)));
		else if (ft_strchr(&list->mod, 'h'))
			print_d_i(list, ft_itoa_long((short int)va_arg(ap, int)));
		else if (ft_strchr(&list->mod, 'l'))
			print_d_i(list, ft_itoa_long(va_arg(ap, long)));
		else if (ft_strchr(&list->mod, 'G'))
			print_d_i(list, ft_itoa_long((char)va_arg(ap, int)));
		else if (ft_strchr(&list->mod, 'K'))
			print_d_i(list, ft_itoa_long(va_arg(ap, long long int)));
	}
	if (*specifier == 'u')
	{
		list->spec = 'u';
		if (*specifier == 'u' && ft_strchr(&list->mod, 'l'))
			print_d_i(list, ft_itoa_long((unsigned long)va_arg(ap, long int)));
		else if (*specifier == 'u' && list->mod == 'K')
			print_d_i(list, ft_itoa_long((unsigned long long int)va_arg(ap, int)));
		else if (*specifier == 'u' && list->mod == 'G')
			print_d_i(list, ft_itoa_long((unsigned char)va_arg(ap, int)));
		else
			print_d_i(list, ft_itoa_long(va_arg(ap, unsigned int)));
	}
}

