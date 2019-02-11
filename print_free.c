
#include "ft_printf.h"

// печатает строку, фришит память + запоминает сколько байт вывел

void		ft_print_free(char *str, t_lists *list, long long max)
{
	int 	i;
	char 	*tmp;

	i = 0;
	if (!str)
		return ;
	tmp = str;
	while (max)
	{
		write(1, str++, 1);
		max--;
		i++;
	}
	free(tmp);
	list->len += i;
}
