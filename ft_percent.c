
#include "ft_printf.h"

static	int		percent_zero(char *arr, t_lists *list, char *argv)
{
	int	i;

	i = 0;
	while (list->width-- > 1)
		arr[i++] = '0';
	arr[i++] = *argv;
	return (i);
}
static	int 	percent_minus(char *arr, t_lists *list, char *argv)
{
	int	i;

	i = 0;
	if (list->minus)
		arr[i++] = *argv;
	while (list->width-- > 1)
		arr[i++] = ' ';
	if (!list->minus)
		arr[i++] = *argv;
	return (i);
}

char	*ft_percent(char *argv, t_lists *list)
{
	char	*arr;
	int		i;
	if (list->width > 1 && list->width)
	{
		arr = ft_strnew((size_t)list->width);
		if ((list->minus && list->zero) || (list->minus && !list->zero))
			i = percent_minus(arr, list, argv);
		else if (list->zero)
			i = percent_zero(arr, list, argv);
		else
			i = percent_minus(arr, list, argv);
		ft_print_free(&arr, list, i);
		free(arr);
		argv++;
		return (argv);
	}
	ft_print_free2("%", list, 1);
	argv++;
	return (argv);
}

