
#include "ft_printf.h"

void ft_print_free(char *str, t_lists *list, long long max)
{
	int		i;

	i = 0;
	if (!str)
		return;
	while (max)
	{
		write(1, str++, 1);
		max--;
		i++;
	}
	list->len += i;
}
