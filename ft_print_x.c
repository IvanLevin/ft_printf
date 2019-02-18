#include "ft_printf.h"

int			ft_itoa_len(unsigned long long n, int base)
{
	int	i;

	i = 0;
	while (n >= (unsigned long long)base)
	{
		n /= base;
		i++;
	}
	return (i);
}

char		*ft_itoa_base(unsigned long long n, int base)
{
	char	*str;
	int		count;
	int		len;

	count = 0;
	len = ft_itoa_len(n, base);
	str = (char *)malloc(sizeof(char) * len + 1);
	while (count <= len)
	{
		str[len - count] = "0123456789abcdef"[n % (long long)base];
		n /= base;
		count++;
	}
	str[count] = '\0';
	return (str);
}

static void	ft_change_letter(char *tmp, char spec)
{
	int i;

	i = 0;
	if (spec == 'X')
		while (tmp[i])
		{
			if ((tmp[i] >= 97 && tmp[i] <= 102) || tmp[i] == 'x')
				tmp[i] = tmp[i] - 32;
			i++;
		}
}

static void	ft_printf_x2(t_lists *list, char *tmp, char *str)
{
	int tmp_i;

	tmp_i = 0;
	if (!list->minus && list->spaces > 0 && !list->zeros)
	{
		tmp_i += fill_space_x(list->spaces, tmp, tmp_i);
		tmp_i += fill_sharp(tmp, tmp_i, list, list->base);
	}
	else if (!list->minus && list->zeros)
	{
		tmp_i += fill_space_x(list->spaces, tmp, tmp_i);
		tmp_i += fill_sharp(tmp, tmp_i, list, list->base);
		tmp_i += fill_zeros(list->zeros, tmp, tmp_i);
		list->zeros = 0;
	}
	tmp_i += fill_sharp(tmp, tmp_i, list, list->base);
	tmp_i += fill_zeros(list->zeros, tmp, tmp_i);
	if (!((list->dot || list->dotzero) && !ft_strcmp(str, "0")))
		while (*str)
			tmp[tmp_i++] = *str++;
	if (list->minus && list->spaces > 0)
		tmp_i += fill_space_x(list->spaces, tmp, tmp_i);
	ft_change_letter(tmp, list->spec);
	ft_print_free(&tmp, list, tmp_i);
}

void		ft_printf_x(unsigned long long n, t_lists *list)
{
	char	*str;
	char	*tmp;
	size_t	len;

	if (list->base == 8 && list->sharp)
		list->sharp = 1;
	if (n == 0 && list->spec == 'x')
		list->sharp = 0;
	str = ft_itoa_base(n, list->base);
	len = ft_strlen(str);
//	tmp = ft_strnew((int)len > list->precision ? (int)len + list->width + \
//			list->sharp : len + list->precision + list->sharp);
    tmp = ft_strnew(1000);
	list->zeros = zeros_amount_x(list, (int)len);
	list->spaces = space_amount_x(str, list, (int)len);
	ft_printf_x2(list, tmp, str);
}

