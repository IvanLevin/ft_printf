
#include "ft_printf.h"

static int fill_space(int space, char *tmp, int tmp_i, t_lists *list)
{
	int i;

	i = 0;
	while (space > 0)
	{
		if (list->zero == 0)
			tmp[tmp_i++] = ' ';
		else
			if (list->zero == 1)
				tmp[tmp_i++] = '0';
		space--;
		i++;
	}
	return (i);
}

int space_amount(t_lists *list, int len)
{
	if (list->width && !list->precision)
		return (list->width);
	if (len > 0 && list->width > len)
		return (list->width - len);
	if (!len && list->width)
		return (list->width);
	return (0);
}

void ft_printf_s(char *str, t_lists *list)
{
	size_t	len;
	size_t	output;
	char	*tmp;
	char	*tmp2;
	int		tmp_i;
	int		space;

	tmp_i = 0;
	len = ft_strlen(str);
	if ((int) len > list->precision && list->precision)
	{
		len = (size_t) list->precision;
		tmp2 = ft_strnew(len);
		str = ft_strncpy(tmp2, str, len);
	}
	output = list->width > (int) len ? list->width : len;
	tmp = ft_strnew(output);
	space = space_amount(list, (int) len);
	if (list->minus == 0 && space > 0)
		tmp_i += fill_space(space, tmp, tmp_i, list);
	if (!list->dot && list->precision)
		while (*str)
			tmp[tmp_i++] = *str++;
	if (list->minus == 1 && space > 0)
		tmp_i += fill_space(space, tmp, tmp_i, list);
	ft_print_free(tmp, list, tmp_i);
}

