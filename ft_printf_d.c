
#include "ft_printf.h"

static	int	ft_sp_zero_d_i(t_lists *list, int i, size_t len, char *arr)
{
	if (list->space == 1)
	{
		arr[i++] = ' ';
		len--;
	}
	while (len--)
		arr[i++] = '0';
	return (i);
}
static int	extra_rigth_d_two(char *a1, char *ad, long long len, t_lists *list)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (list->plus == 1 && *ad != '-')
		len--;
	while (len--)
		a1[i++] = ' ';
	if (list->plus == 1 && *ad != '-')
		a1[i++] = '+';
	while (ad[j])
		a1[i++] = ad[j++];
	return (i);
}

static int	extra_rigth_d(char *ar_1, char *ar_d, long long len, t_lists *list)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if ((list->plus == 1 && *ar_d == '-') || *ar_d == '-')
	{
		ar_1[i++] = '-';
		j++;
	}
	if (list->plus == 1 && *ar_d != '-')
	{
		ar_1[i++] = '+';
		len--;
	}
	if (!list->dot)
		i = ft_sp_zero_d_i(list, i, len, ar_1);
	else
		while (len--)
			ar_1[i++] = ' ';
	while (ar_d[j])
		ar_1[i++] = ar_d[j++];
	return (i);
}

int			d_min_right(char *arr_1, char *arr_d, long long len, t_lists *list)
{
	int	i;

	i = 0;
	len = (long long) list->width - (long long) ft_strlen(arr_d);
	if (list->zero == 1)
		i = extra_rigth_d(arr_1, arr_d, len, list);
	else
		if (list->zero == 0)
			i = extra_rigth_d_two(arr_1, arr_d, len, list);
	return (i);
}

int			d_min_left(char *arr_1, char *arr_d, long long len, t_lists *list)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if ((list->plus == 1 && list->space == 1) \
		|| (list->plus == 1 && list->space == 0))
	{
		arr_1[i++] = '+';
		arr_d++;
	}
	else
		if (list->space == 1 && list->plus == 0 && *arr_d != '-')
		{
			arr_1[i++] = ' ';
			len--;
		}
	while (arr_d[j])
		arr_1[i++] = arr_d[j++];
	while (len--)
		arr_1[i++] = ' ';
	return (i);
}

